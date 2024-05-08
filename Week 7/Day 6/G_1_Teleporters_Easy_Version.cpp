#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n,c; cin>>n>>c;
        vector<ll> a(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            a[i]+=(i+1);
        }

        sort(a.begin(), a.end());
        ll sum = 0, ans = 0;
        for(ll i=0; i<n; i++)
        {
            if(sum + a[i] > c) break;
            sum+=a[i];
            ans++;
        }

        cout<<ans<<endl;
    }
    return 0;
}