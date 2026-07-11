#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int even[n] = {0};
        int odd[n] = {0};

        int no_even = 0, no_odd = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i]%2 == 0){
                no_even++;
            }else{
                no_odd++;
            }
        }

        bool status = false;
        if(no_even % 2 == 0){
            cout << "YES" << endl;
            status = true;
        }else{
            for(int i = 0; i < n; i++){
                for(int j = i; j <= i; j++){
                    if(abs(arr[i]-arr[j]) == 1){
                        cout << "YES" << endl;
                        status = true;
                        break;
                    }
                }
            }
        }

        if(status == false){
            cout << "NO" << endl;
        }
    }
    return 0;
}