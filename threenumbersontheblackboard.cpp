#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> a(3);
        for(int i = 0; i < 3; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int sum = a[0] + a[1];
        if(sum >= a[2]){
            cout << a[2]-a[0] << endl;
        }else{
            cout << sum - a[0] << endl;
        }
    }
}
