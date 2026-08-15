#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,d;
        cin >> n >> m >> d;

        int value = d/m;
        int ans = 0;
        if(value == 0) ans = n;
        else{
            int check = n/(value+1);
            if(n % (value+1) == 0){
                ans = check;
            }else{
                ans = check + 1;
            }
        }
        cout << ans << endl;
    }
}