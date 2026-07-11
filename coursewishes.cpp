#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;

        int capacity[n];
        int initial[n];
        int difference = 0;
        bool status = true;

        for(int i = 0; i < k; i++){
            cin >> capacity[i];
        }
        for(int i = 0; i < n; i++){
            cin >> initial[i];
            if(initial[i] != k+1){
                int no = (k+1) - initial[i];
                difference += no;
            }
        }

        if(difference > 1000){
            status = false;
        }

        if(status){
            cout << difference << endl;
            for(int i = k; i >= 1; i--){
                for(int j = 0; j < n; j++){
                    if(initial[j] == i){
                        while(initial[j] != k+1){
                            cout << j+1 << " ";
                            initial[j]++;
                        }
                    }
                }
            }
            cout << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}