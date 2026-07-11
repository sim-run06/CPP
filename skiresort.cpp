#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> length;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= q) {
                cnt++;
            }
            else {
                if (cnt > 0)
                    length.push_back(cnt);
                cnt = 0;
            }
        }

        // Don't forget the last block
        if (cnt > 0)
            length.push_back(cnt);

        long long ans = 0;
        for (int i = 0; i < length.size(); i++) {
            if (length[i] >= k) {
                long long ways = length[i] - k + 1;
                ans += ways * (ways + 1) / 2;
            }
        }
        cout << ans << endl;
    }
}