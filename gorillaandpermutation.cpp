#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        for(int i = n; i > 0; i--){
            if(i == m) break;;
            cout << i << " ";
        }
        for(int i = 1; i <= m; i++){
            cout << i << " ";
        }
        cout << endl;
    }
}