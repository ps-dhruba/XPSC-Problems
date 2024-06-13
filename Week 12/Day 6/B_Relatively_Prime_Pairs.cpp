#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll l,r; cin>>l>>r;

    ll c = (r-l+1)/2;

    if(c == 0) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        ll i=l;
        while(c-- > 0)
        {
            cout<<i<<" "<<i+1<<endl;
            i+=2;
        }
    }
    return 0;
}