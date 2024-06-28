#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n; cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];

    map<ll,ll> mp;
    for(ll str : a)
    {
        for(ll i=2; i*i<=str; i++)
        {
            if(str%i == 0)
            {
                mp[i]++;
                while(str%i == 0)
                {
                    str/= i;
                }
            }
        }

        if(str>1) mp[str]++;
    }

    ll ans = 1;
    for(auto val : mp)
    {
        ans = max(ans, val.second);
    }

    cout<<ans<<endl;
    return 0;
}