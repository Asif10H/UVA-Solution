#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long long unsigned int ull;
typedef long double ld;
typedef vector<int> vr;
typedef pair<int, int> pr;
#define pb push_back
#define ff first
#define ss second
#define INF 1999999999
#define MODA 1000000007
#define PI 3.1415926535897932384626433
#define endl "\n"
//cout << fixed << setprecision(2);

int p, q, r, s, t, u;
double c;

double givenEquation(double x) {
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

int main() {
    //using bisection method
    while(scanf("%d %d %d %d %d %d",&p, &q, &r, &s, &t, &u) != EOF) {
        if (givenEquation(0) * givenEquation(1) > 0) {
            cout << "No solution" << endl;
        } else {
            double a = 0, b = 1;
            while (abs(a - b) >= 0.0000001) {
                c = (a+b) / 2;
                if (givenEquation(a) * givenEquation(c) <= 0) {
                    b = c;
                } else {
                    a = c;
                }
            }
            cout << fixed << setprecision(4);
            cout << c << endl;
        }
    }
    return 0;
}
