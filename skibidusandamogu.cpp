#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        for(int i = 0; i <= n-3; i++){
            cout << s[i];
        }
        cout << "i" << endl;
    }
    return 0;
}