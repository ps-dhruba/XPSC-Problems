#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool is_prime(ll n)
{
    if(n==1) return false;
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}

bool perfectSq(ll n)
{
    ll x = sqrtl(n);
    return (x*x == n);
}

int main()
{
    ll n; cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];

    for(ll i=0; i<n; i++)
    {
        if(is_prime(sqrtl(a[i])) && perfectSq(a[i])) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}