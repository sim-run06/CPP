#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);

        bool status = true;
        bool num = false;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int s = -1;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(b[i] != -1){
                num = true;
                if(s == -1){
                    s = a[i] + b[i];
                }
                else if(a[i] + b[i] != s){
                    status = false;
                }
            }
        }

        if(num){
            for(int i = 0; i < n; i++){
                if(a[i] > s || a[i] + k < s){
                    status = false;
                    break;
                }
            }
        }

        if(!status){
            cout << 0 << endl;
        }
        else if(num){
            cout << 1 << endl;
        }
        else{
            cout << k - (*max_element(a.begin(), a.end())- *min_element(a.begin(), a.end())) + 1 << endl;
        }
    }
}