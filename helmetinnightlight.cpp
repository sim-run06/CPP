#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , p;
        cin >> n >> p;
        pair<int, int> arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i].second;   //a
        }
        for(int i = 0; i < n; i++){
            cin >> arr[i].first;    // b
        }
        sort(arr,arr+n);
        if(arr[0].first <= p){
            cout << p * n << endl;
        }else{
            int m = n;
            long long cost = p;
            n--;
            int i = 0;
            while(n && i < m && arr[i].first < p){
                cost += min(n,arr[i].second)*arr[i].first;
                n -= min(n,arr[i].second);
                i++;
            }
            cout << cost << endl;
        }
    }
}