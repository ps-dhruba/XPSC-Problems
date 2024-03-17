#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;

    ll cnt = 0;
    
    while(a<=b)
    {
       cnt++;
       a*=2;
    }
    cout<<cnt<<endl;
    return 0;
}