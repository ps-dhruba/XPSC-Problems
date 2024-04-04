#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        vector<ll> a(n);
        map<ll,ll> mp;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a.begin(), a.end());
        ll ans = 0;
        for(int i=0; i<n; i++)
        {
            ll val = a[i];
            if(mp[a[i]] != 0)
            {
                ans++;
                while(mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}