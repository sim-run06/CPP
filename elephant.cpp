#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int moves = 0;
    int arr[5] = {5,4,3,2,1};
    for(int i = 0; i < 5; i++){
        moves = moves + n / arr[i];
        n = n % arr[i];
        if(n == 0){
            break;
        }
    }
    cout << moves << endl;
    return 0;
}