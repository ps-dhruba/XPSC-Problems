#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        ll n,k; cin>>n>>k;
        vector<ll> a;
        ll total = n*(n+1)/2, curS = 0;

        for(ll i=0; i<n; i++)
        {
            ll cur; cin>>cur;
            a.push_back(cur);
            curS+= cur;
        }

        a.push_back(total - curS);
        k = k%(n+1);

        for(ll i=0; i<n; i++)
        {
            cout<<a[(i-k+n+1) % (n+1)]<<" ";
        }

        cout<<endl;
    }
    return 0;
}