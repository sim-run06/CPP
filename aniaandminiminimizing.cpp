#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n,k;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(n == 1 && k == 0){
        cout << arr[0];
    }else if(n == 1 && k > 0){
        cout << 0;
    }else{
        arr[0] = 1;
        for(int i = 1; i < k; i++){
            arr[i] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i];
    }

    return 0;
}