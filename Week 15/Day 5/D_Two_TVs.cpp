#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin>>n;
    map<int,int> mp;
    for(int i=1; i<=n; i++)
    {
        int l,r; cin>>l>>r;
        mp[l]++; mp[r+1]--;
    }

    int sum = 0;
    bool flag = true;
    for(auto [ind, val] : mp)
    {
        sum += val;
        if(sum > 2) 
        {
            flag = false;
            break;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}