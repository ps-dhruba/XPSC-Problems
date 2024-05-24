#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,sum; cin>>n>>sum;
    vector<pair<ll,ll>> a(n);
    for(ll i=0; i<n; i++)
    {
        cin>>a[i].first;
        a[i].second = i+1;
    }

    sort(a.begin(), a.end());

    for(ll i=0; i<n; i++)
    {
        ll sum2 = sum-a[i].first;
        for(int j=i+1, k=n-1; j<k; j++)
        {
            while(a[j].first + a[k].first > sum2)
            {
                k--;
            }

            if(j < k && a[j].first + a[k].first == sum2)
            {
                cout<<a[i].second<<" "<<a[j].second<<" "<<a[k].second<<endl;
                return 0;
            }
        }
    }

    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}