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
    int k, n;
    string str;
    while(cin >> k) {
        cin.ignore();
        vector<int> input;
        getline(cin, str);
        stringstream s(str);
        while(s >> n) {
            input.push_back(n);
        }
        int b = 0;
        cout << "q(x):";
        for(int i = 0; i < input.size()-1; i++) {
            b = input[i] + k * b;
            cout << " " << b;
        }
        cout << endl;
        cout << "r = " << input[input.size() - 1] + k * b << endl;
        cout << endl;
    }

    return 0;
}
