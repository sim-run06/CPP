#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n], b[n];
        int ans = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int mina = *min_element(a,a+n);
        int minb = *max_element(b,b+n);

        for(int i = 0; i < n; i++){
            ans = ans + max(a[i]-mina, b[i]-minb);
        }
        cout << ans << endl;
    }
    return 0;
}