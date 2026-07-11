#include <bits/stdc++.h>
using namespace std;

const int N = 4*1e5;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        int arr[N] = {0};
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr[x]++;
            a.push_back(x);
        }
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr[x]++;
            b.push_back(x);
        }
        sort(arr,arr+N);
        cout << arr[N-1] << endl;
    }
}