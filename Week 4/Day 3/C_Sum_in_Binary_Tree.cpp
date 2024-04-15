#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        ll ans = 0;
        while(n!=0)
        {
            ans+= n;
            n/=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}