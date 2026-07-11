#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, mx = 0, mn = INT_MAX, x = 0, y = 0, count = 0;
    cin >> n;
    
    int height[n];
    for(int i = 0; i < n; i++){
        cin >> height[i];
    }

    // find leftmost max
    for(int i = 0; i < n; i++){
        if(height[i] > mx){
            mx = height[i];
            x = i;
        }
    }

    // find rightmost min
    for(int i = 0; i < n; i++){
        if(height[i] <= mn){
            mn = height[i];
            y = i;
        }
    }

    count = x + (n - 1 - y);

    if(x > y){
        count--;
    }

    cout << count;
}