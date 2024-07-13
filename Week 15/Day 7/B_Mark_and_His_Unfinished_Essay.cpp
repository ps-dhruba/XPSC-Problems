#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod = 1e9+7;

void solve(ll n, ll c, ll q, string st)
{
   

    
}

int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n,c,q; cin>>n>>c>>q;
        string a; cin>>a;
        vector<pair<ll,ll>> option(c),segment(c);

        ll len = n;

        for(ll i=0; i<c; i++)
        {
            ll l,r; cin>>l>>r;

            option[i] = {l,r};
            segment[i] = {len+1,len+(r-l+1)};
            len = segment[i].second;
        }

        while(q--)
        {
            ll k; cin>>k;

            if(k<=n)
            {
                cout<<a[k-1]<<endl;
                continue;
            }

            for(ll i=c-1; i>=0; i--)
            {
                if(k >= segment[i].first && k <= segment[i].second)
                {
                    k = (option[i].first)+(k - segment[i].first);
                }
            }
            cout<<a[k-1]<<endl;
        }
    }

    return 0;
}

