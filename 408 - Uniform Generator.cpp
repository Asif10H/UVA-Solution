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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s, d;
    while(cin >> s >> d) {
        if(__gcd(s, d) == 1) {
            cout << setw(10) << s << setw(10) << d << "    Good Choice" << endl;
            cout << endl;
        } else {
            cout << setw(10) << s << setw(10) << d << "    Bad Choice" << endl;
            cout << endl;
        }
    }
    return 0;
}