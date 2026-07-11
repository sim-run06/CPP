#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        cin >> a[0];
        int value = 0;
        vector<int> ans;
        for(int i = 1; i < n; i++){
            cin >> a[i];
            if(a[i]/abs(a[i]) != a[i-1]/abs(a[i-1])){
                value++;
                ans.push_back(i);
            }
        }
        if(a[n-1]/abs(a[n-1]) == 1){
            value++;
            ans.push_back(n);
        }
        cout << value << endl;
        for(int i = ans.size(); i > 0 ; i--){
            cout << ans[i-1] << " ";
        }
        cout << endl;
    }
}