#include <bits/stdc++.h>
using namespace std;

const int N = 2 * 1e5;
int arr[N];
int pf[N];
int hash[N];

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        pf[i] = pf[i-1] + arr[i];
    }

    int no = 0;
    for(int i = 0; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            if(pf[i] == pf[j]){
                no++;
                break;
            }
        }
    }
    cout << no << endl;
    return 0;
}
