#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        ll ans = 1;

        while(true)
        {
            if(ans*2 > n)
            {
                cout<<ans-1<<endl;
                break;
            }
            ans*=2;
        }
    }
    return 0;
}