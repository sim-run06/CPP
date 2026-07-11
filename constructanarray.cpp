#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 1){
            cout << "1" << endl;
            continue;
        }
        for(int i = n; i < 2*n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}