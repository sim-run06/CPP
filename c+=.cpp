#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,n;
        cin >> a >> b >> n;

        int op = 0;
        while(a <= n || b <= n){
            a += b;
            op++;
            if(a > n){
                break;
            }
            b += a;
            op++;
            if(b > n){
                break;
            }
        }
        cout << op << endl;
    }
    return 0;
}