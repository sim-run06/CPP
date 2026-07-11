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
        bool condition = true;

        int no_added = 0;

        for(int i = 0; i < n-1; i++){
            int smaller = min(arr[i],arr[i+1]);
            int bigger = max(arr[i],arr[i+1]);

            
            while(bigger > 2*smaller){
                smaller *= 2;
                no_added++;
            }
        }
        cout << no_added << endl;
    }
    return 0;
}