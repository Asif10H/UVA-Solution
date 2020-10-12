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

bool prime(ll n)
{
    if(n == 1)
    {
        return true;
    }
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    while(cin >> s)
    {
        int len = s.size();
        ll sum = 0;
        for(int i = 0; i < len; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                //cout << (int)s[i] - 96 << " ";
                ll tmp = (int)s[i] - 96;
                sum += tmp;
            }
            else if(s[i] >= 'A' && s[i] <= 'Z')
            {
                //cout << (int)s[i] + 26 - 64 << " ";
                ll tmp = (int)s[i] + 26 - 64;
                sum += tmp;
            }
        }
        //cout << sum << endl;
        if(prime(sum) == true)
        {
            cout << "It is a prime word." << endl;
        }
        else
        {
            cout << "It is not a prime word." << endl;
        }
    }

    return 0;
}
