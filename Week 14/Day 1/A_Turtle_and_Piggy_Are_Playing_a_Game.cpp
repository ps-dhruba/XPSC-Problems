#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll l,r; cin>>l>>r;
        ll num = 0;

        for(int i=1; i<=1e9; i*=2)
        {
            if(i <= r) num = i;
            else break;
        }

        ll cnt = 0;
        while(num != 1)
        {
            num/=2;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}