#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
        int n;
    ll s;
    cin>>n>>s;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll l = 0, r = 0, ans = 0, sum = 0;
    multiset<ll> ml;

    while(r<n)
    {
        ml.insert(v[r]);
        ll mn,mx;
        mn = *ml.begin(), mx = *ml.rbegin();
        if((mx-mn) <= s)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(l<r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if((mx-mn) <=s) break;
                auto it = ml.find(v[l]);
                ml.erase(it);
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if((mx-mn) <= s)
            {
                ans+=(r-l+1);
            }
        }
        r++;
    }

    cout<<ans<<endl;
    return 0;
}