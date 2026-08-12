#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }

        long long reach = 1;
        int ops = 1;

        while (reach < n) {
            reach = 2 * (reach + 1);
            ops++;
        }

        cout << ops << '\n';
    }

    return 0;
}