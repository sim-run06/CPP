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
            cin >> arr[n];
        }
        sort(arr,arr+n);
        int count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] != arr[n-1-i]){
                count++;
            }
        }
        cout << count/2 << endl;
    }
    return 0;
}