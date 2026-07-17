#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};

        for(int i = 0; i < primes.size(); i++) {
            bool found = false;

            for(int j = 0; j < n; j++) {
                if(v[j] % primes[i] != 0) {
                    found = true;
                    break;
                }
            }

            if(found) {
                cout << primes[i] << "\n";
                break;
            }
        }
    }
}