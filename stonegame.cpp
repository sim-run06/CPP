#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxPos = max_element(a, a + n) - a;
        int minPos = min_element(a, a + n) - a;

        int ans = min({
            max(maxPos, minPos) + 1,
            (n - 1) - min(maxPos, minPos) + 1,
            (n - 1) - maxPos + minPos + 2,
            (n - 1) - minPos + maxPos + 2
        });

        cout << ans << "\n";
    }

    return 0;
}