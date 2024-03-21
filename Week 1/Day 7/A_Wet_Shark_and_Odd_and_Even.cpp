#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll> even;
    vector<ll> odd;

    for(ll i=0; i<n; i++)
    {
        ll val;
        cin>>val;
        if(val % 2 == 0) even.push_back(val);
        else odd.push_back(val);
    }

    ll mxeven = 0, mxodd = 0;
    for(ll val : even)
    {
        mxeven+= val;
    }

    if(odd.size() % 2 == 0)
    {
        for(ll val : odd)
        {
            mxodd+= val;
        }
    }
    else
    {
        sort(odd.begin(), odd.end(), greater<ll>());
        for(int i=0; i<odd.size()-1; i++)
        {
            mxodd+= odd[i];
        }
    }

    cout<<mxeven+mxodd<<endl;
    return 0;
}