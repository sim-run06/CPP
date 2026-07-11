#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];

        int hash[3] = {0};
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            hash[arr[i]]++;
        }
        int minn = min(hash[1],hash[2]);
        cout << hash[0]+minn << endl;
    }
    return 0;
}