#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll sz, q;
        cin>>sz>>q;
        vector<ll> v(sz);
        for(int i=0; i<sz; i++) cin>>v[i];

        vector<ll> pre(sz);
        pre[0] = v[0];
        for(ll i=1; i<sz; i++)
        {
            pre[i] = v[i] + pre[i-1];
        }
        
        while(q--)
        {
            ll l,r,k;
            cin>>l>>r>>k;
            l--, r--;

            ll rem;
            if(l-1 < 0) rem = pre[sz-1] - (pre[r] - 0);
            else rem = pre[sz-1] - (pre[r] - pre[l-1]);
            ll add = (r-l+1)*k;

            if((rem+add) % 2 == 1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}