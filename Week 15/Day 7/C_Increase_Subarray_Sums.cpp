#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n, ll x, ll arr[])
{
    

    
}

int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n,x; cin>>n>>x;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];

        vector<ll> ans(n+1, INT_MIN);
        ans[0] = 0;

        for(ll i=0; i<n; i++)
        {
            ll tmp = 0;
            
            for(ll j=i; j<n; j++)
            {
                tmp += a[j];
                ans[j-i+1] = max(ans[j-i+1],tmp);
            }
        }

        for(ll i=0; i<=n; i++)
        {
            ll ans1 = 0;
            for(ll j=0; j<=n; j++)
            {
                ans1 = max(ans1,min(j,i)*x+ans[j]);
            }

            cout<<ans1<<" ";
        }

        cout<<endl;
    }
    return 0;
}