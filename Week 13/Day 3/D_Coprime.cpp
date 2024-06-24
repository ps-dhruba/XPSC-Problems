#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        map<ll,ll> mp;
        set<ll> st;
        for(ll i=0; i<n; i++)
        {
            ll x; cin>>x;
            st.insert(x);
            if(i+1 > mp[x]) mp[x] = i+1;
        }

        vector<ll> a;
        for(auto val : st) a.push_back(val);

        ll ans = -1;
        for(ll i=0; i<a.size(); i++)
        {
            for(ll j=0; j<a.size(); j++)
            {
                if(__gcd(a[i],a[j]) == 1) ans = max(ans, mp[a[i]] + mp[a[j]]);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}