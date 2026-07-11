#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);

        if(n == 2){
            cout << arr[1] << " " << arr[0] << endl;
            continue;
        }
        bool status = true;
        for(int i = n-3; i >= 0; i--){
            if(arr[i] != arr[i+2] % arr[i+1]){
                status = false;
                cout << "-1" << endl;
                break;
            }
        }
        if(status){
            cout << arr[n-1] << " " << arr[n-2] << endl;
        }
    }
    return 0;
}