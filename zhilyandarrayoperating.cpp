#include <bits/stdc++.h>
using namespace std;

long long a[200005];

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        for (int i = n - 1; i >= 1; i--) {
            if (a[i + 1] > 0) {
                a[i] += a[i + 1];
            }
        }

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            if (a[i] > 0) ans++;
        }

        cout << ans << '\n';
    }
}