#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<char,int> key;
    map<char,int> door;
    int total = 0;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(),::toupper);
    for(int i = 1; i < n/2; i+=2){
        if(s[i-1] == s[i]) continue;
        else{
            key[s[i-1]]++;
            if(key.find(s[i]) == key.end() && key.find(s[i])->second > 0){
                total++;
            }else{
                key.find(s[i])->second--;
            }
        }
    }

    cout << total << endl;
}