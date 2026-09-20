
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        bool found = false;
 
        int result = n/k;
        for(int i = 0; i < n; i++){
            if(i % k == 0){
                found = false;
            }
            if(s[i] == '0' && found == false){
                found = true;
                result--;
            }
        }
 
        cout << result << endl;
    }
}