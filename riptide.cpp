#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int dif_ab = abs(a-b);
        int dif_ac = abs(a-c);
        int dif_bc = abs(b-c);
        cout << min(dif_ab,dif_ac,dif_bc) << endl;
    }
}