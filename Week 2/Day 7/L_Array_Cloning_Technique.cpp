#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int a[n];
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        int mxfrq = 0;
        for(auto val : mp)
        {
            mxfrq = max(mxfrq, val.second);
        }
        
        int ans = 0;
        while(mxfrq<n)
        {
            int remaining = n-mxfrq;
            int add = mxfrq;
            ans++;
            ans+= min(add, remaining);
            mxfrq+= min(add, remaining);
        }

        cout<<ans<<endl;
    }
    return 0;
}