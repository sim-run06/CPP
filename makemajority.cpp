#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c_1 = 0, c_0 = 0;
        vector<int> a;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 0) c_0++;
            else c_1++;

            if (a.empty()) {
                a.push_back(x);
            }
            else if (!(a.back() == 0 && x == 0)) {
                a.push_back(x);
            }
        }
        cout << (c_0 < c_1 ? "YES" : "NO") << endl;
    }
}