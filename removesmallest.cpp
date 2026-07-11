#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int hash[n] = {0};

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            hash[arr[i]]++;
        }

        int minn = *min_element(arr,arr+n);
        int maxx = *max_element(arr,arr+n);
        bool status = true;

        for(int i = minn; i <= maxx; i++){
            if(hash[i] == 0){
                cout << "NO" << endl;
                status = false;
                break;
            }
        }

        if(status){
            cout << "YES" << endl;
        }
    }
    return 0;
}