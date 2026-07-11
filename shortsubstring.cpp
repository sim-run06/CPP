#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(i == 0 || i == n-1){
                cout << s[i];
                continue;
            }else{
                cout << s[i];
                i = i+2;
            }
        }
        cout << endl;
    }
}