#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,c,k;
        cin >> n >> c >> k;

        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        while(true){
            int minn = *min_element(a,a+n);
            int difference = c - minn;
            int minn_i = min_element(a,a+n) - a;
            if(difference >= 0){
                if(k > 0){
                    int add = k - difference;
                    c = c + add + difference;
                    k -= add;
                    a[minn_i] = INFINITY;
                }else{
                    c += difference;
                }
            }else{
                break;
            }
        }

        cout << c << endl;
    }
}