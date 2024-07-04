#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T,null_type,greater_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        pbds<ll> p;
        vector<ll> a(n);

        ll ans = 0;
        for(ll i=0; i<n; i++) cin >> a[i];

        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            p.insert(a[i]);
            ans += p.order_of_key(a[i]) + mp[a[i]];
            mp[a[i]]++;
        }

        cout<<ans<<endl;
    }
    return 0;
}