#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++) cin>>a[i];
        ll sum = 0, op = 0;
        bool neg = false;
        for(ll i=0; i<=n; i++)
        {
            if(i<n)sum+= abs(a[i]);
            if(neg)
            {
                if(i==n || a[i] > 0)
                {
                    op++;
                    neg = false;
                }
            }
            else
            {
                if(a[i] < 0) neg = true;
            }
        }
        cout<<sum<<" "<<op<<endl;
    }
    return 0;
}