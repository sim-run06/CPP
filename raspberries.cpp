#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        int minn = 1e9;
        int count = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % k == 0){
                minn = 0;
            }else{
                minn = min(minn,k-abs(a[i]%k));
            }
            if(a[i] %2 == 0) count++;
        }

        if(k != 4){
            cout << minn << endl;
        }else{
            int needEven = max(0, 2 - count);
            cout << min(minn, needEven) << '\n';
        }
    }
}