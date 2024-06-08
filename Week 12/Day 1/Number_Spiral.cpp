#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n,m; cin>>n>>m;

        if(n > m)
        {
            if(n%2) cout<<(n-1)*(n-1) + 1 + (m-1)<<endl;
            else cout<<n*n - (m-1)<<endl;
        }
        else
        {
            if(m%2) cout<<m*m - (n-1)<<endl;
            else cout<<(m-1)*(m-1) + 1 + (n-1)<<endl;
        }
    }
    return 0;
}