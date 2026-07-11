#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int an = 0, dn = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            an++;
        }else{
            dn++;
        }
    }
    if(an > dn){
        cout << "Anton" << endl;
    }else if(dn > an){
        cout << "Danik" << endl;
    }else{
        cout << "Friendship" << endl;
    }
    return 0;
}