#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    int count = 0,days = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);

        if(x == 1) count++;
        else{
            days = max(count,days);
            count = 0;
        }
    }
    int i = 0;
    if(a[n-1] == 1){
        while(a[i] != 0){
            count++;
            i++;
        }
    }
    days = max(count,days);
    cout << days << endl;

}