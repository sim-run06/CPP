#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        bool found_zero = false;
        int n_0 = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 0){
                found_zero = true;
                n_0++;
            }
        }

        if(n_0 < 2){
            if(n_0 == 0){
                cout << "YES\n";
                cout << string(n, 'A') << '\n';
            }else{
                cout << "NO\n";
            }
        }else{
            cout << "YES\n";
            string ans(n, 'C');
            int cnt = 0;
            for(int i = 0; i < n; i++){
                if(a[i] == 0){
                    if(cnt == 0)
                        ans[i] = 'A';
                    else
                        ans[i] = 'B';

                    cnt++;
                }
            }
            cout << ans << endl;
        }
    }
}