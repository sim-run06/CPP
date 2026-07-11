#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a , b;
        cin >> a >> b;

        int op = 0;
        if(a == b){
            cout << 0 << endl;
        }else{
            while(b != a){
                int dif = abs(a-b);
                if(b > a){
                    swap(a , b);
                }
                if(dif == 1){
                    b++;
                    op++;
                }else if(dif >= 2 && dif < 5){
                    int n = dif/2;
                    b = b + n*2;
                    op = op + n;
                }else if(dif >= 5){
                    int n = dif/5;
                    b = b + n*5;
                    op = op + n;
                }
            }
        }
        cout << op << endl;
    }
    return 0;
}