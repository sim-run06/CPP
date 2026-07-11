#include <bits/stdc++.h>
using namespace std;

int main(){
    string word1, word2;
    cin >> word1 >> word2;

    int result = 0;

    for(int i = 0; i < word1.size(); i++){
        int x = (char)tolower(word1[i]);
        int y = (char)tolower(word2[i]);
        if(x == y){
            result = 0;
        }else if(x > y){
            result = 1;
            break;
        }else{
            result = -1;
            break;
        }
    }
    cout << result;
}