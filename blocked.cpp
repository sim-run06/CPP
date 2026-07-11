#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int arr[n];
        int hash[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            hash[arr[n]]++;
        }

        sort(hash,hash+n);
        sort(arr,arr+n);
        if(hash[n-1] > 1){
            cout << -1 << endl;
        }else{
            for(int i = n-1; i >= 0; i--){
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}