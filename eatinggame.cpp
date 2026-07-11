#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n] = {0};
        for(int i =0; i <n; i++){
            cin >> a[i];
        }
        int count = 0, higher = a[0];
        for(int i = 0; i < n-1; i++){
            if(a[i] < a[i+1]){
                higher = a[i+1];
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i] == higher){
                count++;
            }
        }
        return count;
    }
}