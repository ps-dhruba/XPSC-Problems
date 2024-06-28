#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll lcm(ll a, ll b)
{
    return (a/__gcd(a,b))*b;
}

int main()
{
    ll num; cin>>num;

    ll ans = 1;
    for(ll i=1; i*i<=num; i++)
    {
        if(num%i == 0 && lcm(i,num/i) == num) ans = i;
    }
    ll ans1 = ans, ans2 = num/ans;

    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}