#include <bits/stdc++.h>
using namespace std;

long long LCM(long long a, long long b) {
    return a / __gcd(a, b) * b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long m , a , b, c;
        cin >> a >> b >> c >> m;
        long long A = 0, B = 0, C = 0;
        long long lcm_ab = m/LCM(a,b);
        long long lcm_ac = m/LCM(a,c);
        long long lcm_bc = m/LCM(b,c);
        long long abc = LCM(LCM(a, b), c);
        long long lcm_abc = m / abc;

        long long thrice = lcm_abc * 2;
        A = B = C = thrice;
        A += (lcm_ab+lcm_ac-thrice)*3;
        B += (lcm_ab+lcm_bc-thrice)*3;
        C += (lcm_ac+lcm_bc-thrice)*3;

        a = m/a;
        b = m/b;
        c = m/c;

        A += (a - (lcm_ab+lcm_ac-lcm_abc))*6;
        B += (b - (lcm_ab+lcm_bc-lcm_abc))*6;
        C += (c - (lcm_ac+lcm_bc-lcm_abc))*6;

        cout << A << " " << B << " " << C << endl;
        /*
            long long A = m / a;
            long long B = m / b;
            long long C = m / c;

            long long AB = m / LCM(a, b);
            long long AC = m / LCM(a, c);
            long long BC = m / LCM(b, c);
            long long ABC = m / LCM(LCM(a, b), c);

            cout << 6*A - 3*AB - 3*AC + 2*ABC << " ";
            cout << 6*B - 3*AB - 3*BC + 2*ABC << " ";
            cout << 6*C - 3*AC - 3*BC + 2*ABC << "\n";
        */
    }
}