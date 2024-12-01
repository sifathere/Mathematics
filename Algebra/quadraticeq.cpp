#include <bits/stdc++.h>
using namespace std;

int main() {
    double b, c;
    cout << "Enter coefficients b and c (for equation x^2 + b*x + c = 0): ";
    cin >> b >> c;

    double S0 = 2;
    double S1 = -b;

    double Sn;
    int n;
    cout << "Enter the value of n (to find S_n): ";
    cin >> n;

    if (n == 0) {
        Sn = S0;
    } else if (n == 1) {
        Sn = S1;
    } else {
        double S_prev2 = S0;
        double S_prev1 = S1;
        for (int i = 2; i <= n; ++i) {
            Sn = -b * S_prev1 - c * S_prev2;
            S_prev2 = S_prev1;
            S_prev1 = Sn;
        }
    }

    cout << "S_" << n << " = " << Sn << endl;

    return 0;
}
