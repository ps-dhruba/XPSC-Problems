#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        map<ll,ll> cnt;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            cnt[__lg(x)]++;
        }
        ll ans = 0;
        for(auto [x,y] : cnt)
        {
            ans+= (y*(y-1))/2;
        }

        cout<<ans<<endl;
    }
    return 0;
}