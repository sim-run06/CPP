#include <bits/stdc++.h>
using namespace std;

int manin(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        int difference = 1e9;
        a[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            difference = max(difference,a[i]-a[i-1]);
        }
        difference = max(difference,2*(k - a[n]));
        cout << difference << endl;
    }
}