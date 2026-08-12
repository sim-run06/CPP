#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int n_1 = 0;
        int n_0 = 0;
        vector<int> final;
        vector<int> zeroes;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                n_1++;
                final.push_back(i+1);
            }
        }

        for(int i = n-1; i >= n-n_1; i--){
            if(s[i] == '0'){
                n_0++;
                zeroes.push_back(i+1);
            }
        }

        if(n_0 == 0){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
            cout << 2*n_0 << " ";
            for(int i = 0; i < n_0; i++){
                cout << final[i] << " ";
            }
            for(int i = zeroes.size() - 1; i >= 0; i--){
                cout << zeroes[i] << " ";
            }
            cout << endl;
        }
    }
}