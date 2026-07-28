#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count = 0;
        int even = 0;
        int odd = 0;
        vector<char> a;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '4'){
                count++;
            }else if(s[i] == '2'){
                a.push_back(s[i]);
            }else{
                a.push_back(s[i]);
                odd++;
            }
        }
        int keep = odd;
        for(char c: a){
            if(c == '2'){
                even++;
            }else{
                odd--;
            }
            keep = max(keep,even+odd);
        }
        
        cout << count+(a.size()-keep) << endl;
    }
}