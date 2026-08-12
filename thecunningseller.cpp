#include <bits/stdc++.h>
using namespace std;

int cost(int n){
    int ans = 0;
    for(int i = 0; i < n-1; i++){
        ans *= 3;
    }
    ans *= (9+n);
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long ans = 1;
        long long count;
        long long costs = 0;
        for(int i = n; i >= 0; i = i/3){
            if(i/3 > 0){
                count++;
                n /= 3;
            }
        }
        for(int i = 0; i < count; i++){
            ans *= 3;
        }
        
        costs += cost(ans);
        if(n == 1){
            costs += 10;
        }else{
            costs += 20;
        }
    }
}