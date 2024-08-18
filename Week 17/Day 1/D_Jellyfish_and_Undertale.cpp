#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll a,b,n; cin>>a>>b>>n;
        vector<ll> v(n);
        ll mx = a-1, total = b;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            total+= min(mx,v[i]);
        }
        cout<<total<<endl;
    }
    return 0;
}