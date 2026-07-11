#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.size() > 10){
            cout << s[0] << s.size() << s[s.size()-1];
        }else{
            cout << s;
        }
    }
    return 0;
}