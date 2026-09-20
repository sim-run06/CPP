#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
 
        long long min_e = INT_MAX;
        long long n_0 = 0;
        long long n_1 = 0;
        long long n_2 = 0;
 
        for(int i = 0; i < n; i++){
            cin >> a[i];
 
        }
        sort(a.begin(),a.end());
 
        for(int i = 0; i < n; i++){
            if(a[i] % 2 != 0){
                n_1++;
            }else{
                min_e = min(a[i],min_e);
                if((a[i] - min_e) % 4 == 0){
                    n_2++;
                }else{
                    n_0++;
                }
            }
        }
        cout << max(n_0,max(n_1,n_2)) << endl;
    }
}