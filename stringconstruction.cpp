#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int same = k+1;
        int difference = n-same;
 
        if(abs(n-k) == 1){
            cout << -1 << endl;
            continue;
        }else if(k == 0){
            int a = 0;
            int b = 1;
            for(int i = 0; i < n; i++){
                cout << a;
                swap(a,b);
            }
            cout << endl;
            continue;
        }else{
            int a = 0;
            int b = 1;
            for(int i = 0; i < difference; i++){
                cout << a;
                swap(a,b);
            }
            swap(a,b);
            for(int i = 0; i < same/2; i++){
                cout << a;
            }
            int last = same - (same/2);
            swap(a,b);
            for(int i = 0; i < last; i++){
                cout << a;
            }
            cout << endl;
        }
    }
}