#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int response[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> response[i][j];
        }
    }

    int count = 0, result = 0;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < 3; j++){
            if(response[i][j] == 1){
                count++;
            }
        }
        if(count >= 2){
            result++ ;
        }
    }
    cout << result;
    return 0;
}