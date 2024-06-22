#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        vector<pair<ll,ll>> a(n);
        for(ll i=0; i<n; i++) cin>>a[i].first>>a[i].second;

        ll ans = 0;
        pbds<pair<ll,ll>> p;
        sort(a.begin(), a.end());

        for(ll i=0; i<n; i++) p.insert({a[i].second,i});
        for(ll i=0; i<n; i++)
        {
            ans += p.order_of_key({a[i].second,i});
            p.erase({a[i].second,i});
        }

        cout<<ans<<endl;
    }
    return 0;
}