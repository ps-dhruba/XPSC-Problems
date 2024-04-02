#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n, min_day, temp;
        cin>>n>>min_day>>temp;
        vector<ll> v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }

        ll ans = 0, cons = 0;
        for(ll i=0; i<n; i++)
        {
            if(v[i] <= temp)
            {
                cons++;
                if(i == n-1 || v[i+1] > temp)
                {
                    if(cons >= min_day)
                    {
                        ll x = cons-min_day+1;
                        ll add = (x*(x+1))/2;
                        ans+= add;
                    }
                    cons = 0;
                } 
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}