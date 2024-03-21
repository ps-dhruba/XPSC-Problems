#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        ll ans = 0;
        for(ll i=1; i<=n; i++)
        {
            if(a[i] > i)
            {
                ans = max(ans, a[i] - i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

