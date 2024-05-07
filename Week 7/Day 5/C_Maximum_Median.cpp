#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    auto ok = [&](ll m)
    {
        ll cnt = 0;
        for(ll i=n/2; i<n; i++)
        {
            cnt+= (a[i] < m ? (m - a[i]) : 0);
        }
        return cnt<=k;
    };

    ll l = 1, r = 2e9, mid, ans = 0;
    while(l<=r)
    {
        mid = l + (r-l) / 2;
        if(ok(mid)) 
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }

    cout<<ans<<endl;
    return 0;
}