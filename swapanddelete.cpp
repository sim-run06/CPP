#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int one = 0, zero = 0;
        int hash[s.size()] = {0};
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                one++;
            }else{
                zero++;
            }
            hash[i] = max(one,zero);
        }

        int dif = abs(one-zero);
        if(dif == 0){
            cout << "0" << endl;
        }else if(one == 0 || zero == 0){
            cout << max(one,zero) << endl;
        }else{
            int i = 1;
            int cost = dif;
            while(hash[s.size()-dif-i] != min(zero,one)){
                cost++;
                i++;
            }
            cout << cost << endl;
        }
    }
}