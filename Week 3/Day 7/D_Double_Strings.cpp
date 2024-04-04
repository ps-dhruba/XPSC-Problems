#include <bits/stdc++.h>
#define ll long long
using namespace std;

string solve(ll n, vector<string>&v, map<string,bool>&mp)
{
    string ans;
    for(string s : v)
    {
        string first;
        bool found = false;

        for(ll i=0; i<s.size(); i++)
        {
            first += s[i];
            string second;

            for(ll j=i+1; j<s.size(); j++) second += s[j];
            if(mp[first] && mp[second])
            {
                ans += '1';
                found = true;
                break;
            }
        }
        if(!found) ans += '0';
    }

    return ans;
}

int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        vector<string> v(n);
        map<string,bool> mp;

        for(ll i=0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]] = true;
        }

        cout<<solve(n,v,mp)<<endl;
    }

    return 0;
}