#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int c_a = 0;
        bool status = true;

        for(int i = 0; i < s.size()-1; i++){
            if(s[i] == s[i+1]){
                c_a++;
            }
            if(c_a > 2){
                cout << "NO" << endl;
                status = false;
                break;
            }
        }
        if(status){
            cout << "YES" << endl;
        }
    }
}