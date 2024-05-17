#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll h,n; cin>>h>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin>>a[i];

        sort(a.begin(), a.end(), greater<ll>());
        vector<ll> dif(n);
        ll dis = 0, total = 0;

        for(ll i=0; i<n; i++)
        {
            dif[i] = h-a[i];
            if(dis+dif[i] < h)
            {
                total++;
                dis+= dif[i];
            }
            else break;
        }

        cout<<total<<endl;
    }
    return 0;
}