#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a,b;
        cin >> a >> b;

        int even_index_a = 0;
        int odd_index_a = 0;

        int even_index_b = 0;
        int odd_index_b = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == '1'){
                if(i % 2 == 0) even_index_a++;
                else odd_index_a++;
            }
            if(b[i] == '1'){
                if(i % 2 == 0) even_index_b++;
                else odd_index_b++;
            }
        }
        if(even_index_a == even_index_b && odd_index_a == odd_index_b){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}