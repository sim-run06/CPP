#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);

        int min_a = INT_MAX;
        int max_a = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            min_a = min(min_a,a[i]);
            max_a = max(max_a,a[i]);
        }

        int min_b = INT_MAX;
        int max_b = 0;
        for(int i = 0; i < m; i++){
            cin >> b[i];
            min_b = min(min_b,b[i]);
            max_b = max(max_b,b[i]);
        }

        if(n < m*2){
            cout << "NO" << endl;
        }else{
            if(min_a < min_b && max_a > max_b){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
}