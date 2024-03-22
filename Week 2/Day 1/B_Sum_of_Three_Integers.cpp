#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll K, S;
    cin>>K>>S;

    ll cnt = 0;
    for(ll i=0; i<=K; i++)
    {
        for(ll j=0; j<=K; j++)
        {
            ll k = S - (i+j);
            if(k>=0 && k<= K) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}