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

bool isPrime(ll n) {
    if(n < 2) {
        return false;
    }
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
ll revNum(ll rev) {
    ll ans = 0;
    while(rev > 0) {
        ll rem = rev % 10;
        ans = ans * 10 + rem;
        rev /= 10;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    while(cin >> n) {
        ll rev = n;
        ll tmp = revNum(rev);
        //cout << isPrime(n) << " " << revNum(rev) << " " << n << endl;
        if(isPrime(n) == true && isPrime(tmp) == true && n != tmp){
            cout << n << " is emirp." << endl;
        }
        else if(isPrime(n) == true){
            cout << n <<  " is prime." << endl;
        }
        else{
            cout << n <<  " is not prime." << endl;
        }
    }


    return 0;
}
