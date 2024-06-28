#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        bool flag = true;
        for(ll i=1; i<=n; i++)
        {
            ll x; cin>>x;
            bool check = false;

            for(ll j=i+1; j>=2; j--)
            {
                if(x%j != 0)
                {
                    check = true;
                    break;
                }
            }

            flag &= check;
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}