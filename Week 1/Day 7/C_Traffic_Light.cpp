#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        string nw = s+s;
        ll ans = -1, dis = 0;
        for(int i = nw.size()-1; i>=0; i--)
        {
            if(nw[i] == 'g') dis = 0;
            if(nw[i] == c) ans = max(ans,dis);
            dis++;
        }
        cout<<ans<<endl;
    }
    return 0;
}