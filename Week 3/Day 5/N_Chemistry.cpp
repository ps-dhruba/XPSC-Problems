#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool palindrome(ll wnt, ll frq[])
{
        if(wnt==1)
        {
            for(ll i=0; i<26; i++)
            {
                if(frq[i]>=1) return true;
            }
        }
        else if(wnt == 0) return true;
        return false;
}
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,k;
        cin>>n>>k;
        ll frq[26] = {0};

        string a;
        for(ll i=0; i<n; i++)
        {
            char c;
            cin>>c;
            a+= c;
            frq[c-'a']++;
        }

        ll wnt = (n-k);
        for(ll i=0; i<26; i++)
        {
            if(frq[i]>0 && frq[i]%2 ==0)
            {
                if(frq[i] > wnt) wnt-=wnt;
                else wnt-= (frq[i]);
            }
            else if(frq[i]>0  && frq[i]%2==1)
            {
                if(frq[i]-1 > wnt) wnt-=wnt;
                else wnt-= (frq[i]-1);
            }
        }

        if(palindrome(wnt,frq)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}