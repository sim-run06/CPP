#include <bits/stdc++.h>
using namespace std;

int Calc(int occur){
    int ans = 0;
    int q = occur / 3;
    int r = occur % 3;
    if(r != 0 && r > 0){
        ans += q+1;
    }else{
        ans += q;
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        int occur = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                occur++;
            }else{
                occur--;
                ans += Calc(occur);
                ans++;
                occur = -1;
            }
        }
        
        ans += Calc(occur);
        cout << ans << endl;
    }
}