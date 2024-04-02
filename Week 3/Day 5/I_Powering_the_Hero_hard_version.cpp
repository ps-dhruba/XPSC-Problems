#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        priority_queue<ll> pq;
        ll ans = 0;
        for(ll i=0; i<n; i++)
        {
            if(v[i] == 0)
            {
                if(pq.empty()) continue;
                else
                {
                    ans+= pq.top();
                    pq.pop();
                }
            }
            else pq.push(v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}