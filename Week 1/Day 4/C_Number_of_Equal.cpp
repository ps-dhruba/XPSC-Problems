#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n], b[m];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll i=0; i<m; i++)
    {
        cin>>b[i];
    }
    
    ll i=0, j=0;
    ll ans = 0;
    while(i<n && j<m)
    {
        ll cnt1 = 0, cnt2 = 0, curr = a[i];
        while(a[i] == curr && i<n)
        {
            cnt1++;
            i++;
        }

        while(curr > b[j] && i<m)
        {
            j++;
        }

        while(b[j] == curr && j<m)
        {
            cnt2++;
            j++;
        }

        ans+= (cnt1 * cnt2);
    }
    
    cout<<ans<<endl;
    return 0;
}