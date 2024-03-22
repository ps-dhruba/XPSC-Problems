#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll len, num;
    cin>>len>>num;
    vector<ll> v;
    for(ll i=0; i<len; i++)
    {
        ll val;
        cin>>val;
        v.push_back(val);
    }

    vector<ll> newV;

    for(auto val : v)
    {
        if(val != num) newV.push_back(val);
    }

    for(auto val : newV)
    {
        cout<<val<<" ";
    }
    return 0;
}