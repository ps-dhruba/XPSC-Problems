#include <bits/stdc++.h>
#define ll long long
using namespace std;

string solve(ll size, string a)
{
    ll x = 0, y=0;
    for(ll i=0; i<size; i++)
    {
        if(a[i] == 'N') y++;
        else if(a[i] == 'S') y--;
        else if(a[i] == 'E') x--;
        else x++;
    }

    if(abs(x)%2 || abs(y)%2) return "NO";
    else if(size == 2 && x == 0 && y == 0) return "NO";

    string ans;
    char m[2] = {'R','H'};
    ll n = 0, s = 0, e = 1, w = 1;

    for(ll i=0; i<size; i++)
    {
        if(a[i] == 'N')
        {
            ans += m[n];
            n = 1-n;
        }
        else if(a[i] == 'S')
        {
            ans += m[s];
            s = 1-s;
        }
        else if(a[i] == 'W')
        {
            ans += m[w];
            w = 1-w;
        }
        else
        {
            ans += m[e];
            e = 1-e;
        }
    }

    return ans;
}

int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        string a; cin>>a;

        cout << solve(n,a) << endl;
    }

    return 0;
}