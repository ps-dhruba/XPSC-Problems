#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        string a; cin>>a;
        
        vector<ll> minus;
        ll total = 0;
        ll minChange = 0;

        for(int i=0; i<n; i++)
        {
            ll L = i;
            ll R = n-i-1;
            if(a[i] == 'L')
            {
                if(R>L)
                {
                    minChange++;
                    total+= R;
                    minus.push_back(R-L);
                }
                else
                {
                    total+= L;
                }
            }
            else
            {
                if(L>R)
                {
                    minChange++;
                    total+= L;
                    minus.push_back(L-R);
                }
                else total+= R;
            }
        }

        vector<ll> ans(n+1);
        for(int i=minChange; i<=n; i++)
        {
            ans[i] = total;
        }

        sort(minus.begin(), minus.end(), greater<ll>());

        for(int i=minChange-1; i>=1; i--)
        {
            total-=minus.back();
            minus.pop_back();
            ans[i] = total;
        }

        for(int i=1; i<=n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}