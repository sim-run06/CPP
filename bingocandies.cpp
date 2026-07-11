#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n*n];
        int hash[1000001] = {0};
        for(int i = 0; i < n*n; i++){
            cin >> a[i];
            hash[a[i]]++;
        }

        int maxx = *max_element(hash,hash+1000001);
        if(maxx >= n*n-1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}
