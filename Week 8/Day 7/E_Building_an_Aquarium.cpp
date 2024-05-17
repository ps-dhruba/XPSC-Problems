#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool valid(ll mid, ll n, ll x, vector<ll>&a)
{
    ll water = 0;
    for(ll i=0; i<n; i++)
    {
        if(a[i]<=mid) water+= mid-a[i];
    }

    return water<=x;
}

int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n,x; cin>>n>>x;
        vector<ll> a(n);
        ll mn = INT_MAX;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            mn = min(mn, a[i]);
        }

        ll l = 1, r = x+mn, ans = 1;
        while(l<=r)
        {
            ll mid = l+(r-l)/2;

            if(valid(mid,n,x,a))
            {
                ans = mid;
                l = mid+1;
            }
            else r = mid-1;
        }

        cout<<ans<<endl;
    }
    return 0;
}