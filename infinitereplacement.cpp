#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        int a_s = s.size();

        string t;
        cin >> t;
        int t_s = t.size();
        int count_a = 0;
        long long ans = 0;
        bool status = true;
      
        if(t_s > 1){
            for(int i = 0; i < t_s; i++){
                if(t[i] == 'a'){
                    ans = -1;
                    status = false;
                    break;
                }
            }

            if(status){
                ans = (1LL << a_s);
            }
        }else{
            if(t[0] == 'a'){
                ans = 1;
            }else{
                ans = (1LL << a_s);
            }
        }
        /*
            if (t == "a") {
            cout << 1 << '\n';
            }
            else if (t.find('a') != string::npos) {
                cout << -1 << '\n';
            }
            else {
                cout << (1LL << s.size()) << '\n';
            }
        */
        cout << ans << endl;
    }
}