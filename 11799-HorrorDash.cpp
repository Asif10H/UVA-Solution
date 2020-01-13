
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j = 1; j <= t; j++)
    {
       vector<int>arr;
       int n, e;
       cin>>n;
       for(int i = 0; i < n; i++)
       {
         cin>>e;
         arr.push_back(e);
       }
     // cout<<*max_element(arr.begin(), arr.end());
      cout<<"Case "<<j<<":"<<" "<<*max_element(arr.begin(), arr.end())<<endl;
    }
}
