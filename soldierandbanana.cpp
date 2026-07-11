#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,m,n;
    cin >> i >> m >> n;
    int cost = 0;
    for(int j = 1; j <= n; j++){
        cost = cost + j*i;
    }
    if(cost > m){
        cout << cost-m << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}