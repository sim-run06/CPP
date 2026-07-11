#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int total = n;
        long long cost = 0;
        int index = 0;
        int place = 0;
        int minn = INT_MAX;
        int store[n] = {0};
        while(n--){
            int m;
            cin >> m;
            int arr[m];
            
            for(int i = 0; i < m; i++){
                cin >> arr[i];
            }
            sort(arr,arr+m);
            store[place] = arr[1];
            if(arr[0] <= minn){
                minn = arr[0];
                index = place;
            }
            place++;
        }
        sort(store,store+total);
        for(int i = 1; i < total; i++){
            cost += store[i];
        }
        cout << cost+minn << endl;
    }
}