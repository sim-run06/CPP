#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,q;
        cin >> n >> m >> q;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int d;
        cin >> d;
        sort(v.begin(),v.end());
        int ans = 0;
        if(v[0] <= d && v[1] >= d){
            ans = min(abs(v[0]-d),abs(v[1]-d));
        }else{
            if(v[0] < d){
                ans = n-v[1];
            }else{
                ans = v[0]-1;
            }
        }
        cout << ans << endl;
    }
}