#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    map<string,int> mp;
    while(t--){
        string s;
        cin >> s;
        if(mp.find(s) == mp.end()){
            mp.insert({s,0});
            cout << "OK" << endl;
        }else{
            auto it = mp.find(s);
            it->second++;
            cout << it->first << it->second << endl;
        }
    }
}