#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n; cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];

    ll ans = 0, i = 0, j = 0;
    set<ll> s;
    while(i<n && j<n)
    {
        while(j<n && !s.count(a[j]))
        {
            s.insert(a[j]);
            ans = max(ans,j-i+1);
            j++;
        }

        while(j<n && s.count(a[j]))
        {
            s.erase(a[i]);
            i++;
        }
    }

    cout<<ans<<endl;
    return 0;
}