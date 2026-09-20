#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        vector<long long> a(n);
        vector<long long> max_i(n);
 
        long long maxx = 0;
 
        for(int i = 0; i < n; i++){
            cin >> a[i];
 
            maxx = max(maxx, a[i]);
            max_i[i] = maxx;
        }
 
        long long ans = 0;
 
        for(int i = 1; i < n; i += 2){
            long long peak = max_i[i];
            if(a[i-1] >= peak){
                ans += a[i-1] - peak + 1;
                a[i-1] = peak - 1;
            }
            if(i + 1 < n && a[i+1] >= peak){
                ans += a[i+1] - peak + 1;
                a[i+1] = peak - 1;
            }
        }
 
        cout << ans << '\n';
    }
}