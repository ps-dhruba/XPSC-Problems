#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll r,c;
        cin>>r>>c;
        ll a[r][c];
        for(ll i=0; i<r; i++)
        {
            for(ll j=0; j<c; j++)
            {
                cin>>a[i][j];
            }
        }

        ll ans = 0, sum, x,y;
        for(ll i=0; i<r; i++)
        {
            for(ll j=0; j<c; j++)
            {
                sum = a[i][j];
                x = j-1;
                y = j+1;

                for(ll k= i-1; k>=0; k--)
                {
                    if(x >= 0)
                    {
                        sum+= a[k][x];
                        x--;
                    }
                    if(y<c)
                    {
                        sum+= a[k][y];
                        y++;
                    }
                }
                
                x = j-1;
                y = j+1;
                for(ll k = i+1; k<r; k++)
                {
                    if(x>=0)
                    {
                        sum+= a[k][x];
                        x--;
                    }
                    if(y<c)
                    {
                        sum+= a[k][y];
                        y++;
                    }
                }

                if(sum > ans) ans = sum;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}