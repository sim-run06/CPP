#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> even;
        vector<int> odd;
    
        for(auto &x : v){
            cin >> x;
            if(x % 2 == 0){
                even.push_back(x);
            }else{
                odd.push_back(x);
            }
        }
        sort(odd.begin(),odd.end());

        int ans = 0;
        if(odd.size() > 0){
            ans += *odd.begin();
            for(auto a: even){
                ans += a;
            }
            int left = (odd.size()-1)/2;
            for(int i = 1; i < left; i++){
                ans += odd[i];
            }
            cout << ans << endl;
        }else{
            cout << 0 << endl;
        }
    }
}