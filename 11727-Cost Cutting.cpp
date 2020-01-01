
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        vector<int>arr;
        for(int i = 0; i < 3; i++)
        {
           cin>>a;
           arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        //cout<<"Case"<<arr[1]<<endl;
        printf("Case %d: %d\n", i, arr[1]);
    }


}
