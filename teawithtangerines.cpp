#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        int min = *min_element(a.begin(),a.end());
        int op = 0;
        for(auto value: a){
            if(value >= 2*min){
                int d = (2*min-1);
                op += (value-2*min)/d + 1;
            }
        }
        cout << op << endl;
    }
}