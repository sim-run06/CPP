#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
            sort(v[i].begin(), v[i].end());
        }
        bool status = true;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m - 1; j++) {
                if(v[i][j + 1] - v[i][j] != n) {
                    status = false;
                    break;
                }
            }
            if(!status)
                break;
        }

        if(!status) {
            cout << -1 << endl;
            continue;
        }

        vector<pair<int,int>> order;
        for(int i = 0; i < n; i++) {
            order.push_back({v[i][0], i});
        }
        sort(order.begin(), order.end());
        for(auto x : order) {
            cout << x.second + 1 << " ";
        }
        cout << endl;
    }
}