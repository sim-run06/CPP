#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int ans = x + y;
        if ((x + y) % 3 == 0 &&
            2 * y <= x &&
            4 * y >= -x)
        {
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}