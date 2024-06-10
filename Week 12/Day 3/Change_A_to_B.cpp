#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll a,B,k; cin>>a>>B>>k;
        ll op = 0;

        while(a != B)
        {
            if(B/k < a)
            {
                op+= B-a;
                B-=B-a;
            }
            else if(B%k == 0 && B/k >= a)
            {
                op++;
                B/=k;
            }
            else
            {
                ll rem = B%k;
                if(rem != 0)
                {
                    op+= rem;
                    B-=rem;
                }
                else
                {
                    op++;
                    B--;
                }
            }
        }

        cout<<op<<endl;
    }
    return 0;
}