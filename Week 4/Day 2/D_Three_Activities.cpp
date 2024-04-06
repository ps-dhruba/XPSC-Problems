#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        ll a[n], b[n], c[n];

        priority_queue<pair<ll,ll>> pq1;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            pq1.push({a[i], i});
        }

        priority_queue<pair<ll,ll>> pq2;
        for(ll i=0; i<n; i++)
        {
            cin>>b[i];
            pq2.push({b[i],i});
        }

        priority_queue<pair<ll,ll>> pq3;
        for(ll i=0; i<n; i++)
        {
            cin>>c[i];
            pq3.push({c[i], i});
        }

        vector<pair<ll,ll>> v1(3);
        for(int i=0; i<3; i++)
        {
            v1[i].first = pq1.top().first;
            v1[i].second = pq1.top().second;
            pq1.pop();
        }

        vector<pair<ll,ll>> v2(3);
        for(int i=0; i<3; i++)
        {
            v2[i].first = pq2.top().first;
            v2[i].second = pq2.top().second;
            pq2.pop();
        }

        vector<pair<ll,ll>> v3(3);
        for(int i=0; i<3; i++)
        {
            v3[i].first = pq3.top().first;
            v3[i].second = pq3.top().second;
            pq3.pop();
        }

        ll res = 0;

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                for(int k=0; k<3; k++)
                {
                    if(v1[i].second != v2[j].second && v1[i].second != v3[k].second && v2[j].second != v3[k].second)
                    {
                        res = max(v1[i].first+v2[j].first+v3[k].first, res);
                    }
                }
            }
        }

        cout<<res<<endl;
    }
    return 0;
}