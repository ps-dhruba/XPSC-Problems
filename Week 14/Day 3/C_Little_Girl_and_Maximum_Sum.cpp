#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,q; cin>>n>>q;
    vector<ll> a(n+1), difArray(n+2,0);
    for(ll i=1; i<=n; i++) cin>>a[i];

    ll total = 0;
    sort(a.begin(),a.end(),greater<ll>());

    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        difArray[l]++;
        difArray[r+1]--;

       
    }
    for(ll i=1; i<=n; i++) difArray[i] += difArray[i-1];
    sort(difArray.begin(),difArray.end(),greater<ll>());

    cout<<endl;

    for(ll i=0; i<n; i++)
    {
        if(difArray[i] > 0) total += difArray[i]*a[i];
    } 

    cout<<total<<endl;
    return 0;
}