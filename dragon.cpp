#include <bits/stdc++.h>
using namespace std;

const int inf = 10e5;

int main(){
    int s,n;
    cin >> s >> n;
    int dragon[n] , bonus[n];
    for(int i = 0; i < n; i++){
        cin >> dragon[i] >> bonus[i];
    }

    bool status = true;

    for(int i = 0; i < n; i++){
        int least = *min_element(dragon,dragon+n);
        int index = min_element(dragon,dragon+n) - dragon;

        if(s < least){
            cout << "NO" << endl;
            status = false;
            break;
        }else{
            s += bonus[index];
        }
        dragon[index] = inf;
    }
    if(status == true){
        cout << "YES" << endl;
    }
    return 0;
}