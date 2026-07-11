#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        long long int r, g, b, w;
        cin >> r >> g >> b >> w;

        int new_r = r % 2;
        int new_g = g % 2;
        int new_b = b % 2;
        int new_w = w % 2;
        int res = new_r+ new_g+ new_b+ new_w;

        if(res == 2){
            cout << "No" << endl;
        }else if(res == 3){
            if(r == 0 || b == 0 || g == 0){
                cout << "No" << endl;
            }else{
                cout << "Yes" << endl;
            }
        }else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}