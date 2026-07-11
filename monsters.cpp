#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<pair <int,int>> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i].first;
            arr[i].first %= k;
            arr[i].second = i;
        }
        sort(arr.begin(),arr.end());
        int i = 0;
        while(arr[i].first == 0){
            cout << arr[i].second;
            i++;
        }
        reverse(arr.begin(),arr.end());
        for(int j = i; j < n; j++){
            cout << arr[j].second;
        }
    }
}