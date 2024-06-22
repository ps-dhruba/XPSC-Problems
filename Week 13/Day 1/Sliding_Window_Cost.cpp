#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main()
{
    ll n,k; cin>>n>>k;
    vector<ll>a(n);
    set<ll> st;

    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        st.insert(a[i]);
    }

    vector<ll> ans;
    ll l=0, r=0;
    if(st.size() == 1)
    {
        while(r<n)
        {
            if(r-l+1 == k)
            {
                ans.push_back(0);
                l++;
            }
            r++;
        }
    }

    else
    {
        pbds<ll> p;
        for(ll i=0; i<k; i++) p.insert(a[i]);

        ll oldMid = *p.find_by_order((k+1)/2-1), cnt = 0;
        for(ll i=0; i<k; i++) cnt+= abs(a[i]-oldMid);
        ans.push_back(cnt);

        for(ll i=0; i<n-k; i++)
        {
            p.erase(p.find_by_order(p.order_of_key(a[i])));
            p.insert(a[i+k]);
            ll mid = *p.find_by_order((k+1)/2-1);
            cnt = cnt + abs(mid - a[i+k]) - abs(oldMid - a[i]);
            if(k%2==0) cnt -= (mid - oldMid);
            oldMid = mid;
            ans.push_back(cnt);
        }
    }

    for(auto val : ans) cout<<val<<" ";
    cout<<endl;
    return 0;
}