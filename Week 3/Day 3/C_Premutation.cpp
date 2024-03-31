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
        int m = n-1;
        int a[n][n-1];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++) cin>>a[i][j];
        }

        int ind, vl;
        
        map<int,int> mp;
        for(int i=0; i<n; i++) mp[a[i][n-2]]++;
        for(auto val : mp)
        {
            if(val.second == 1) vl = val.first;
        }
        
        for(int i=0; i<n; i++)
        {
            if(a[i][n-2] == vl) ind = i;
        }

        vector<int> v; 
        for(int j=0; j<n-1; j++) v.push_back(a[ind][j]);

        bool vis[n+1] = {false};
        for(auto val : v) vis[val] = true;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                if(!vis[a[i][j]])
                {
                    vis[a[i][j]] = true;
                    v.push_back(a[i][j]);
                }
            }
        }

        for(auto val : v) cout<<val<<" ";
        cout<<endl;
    }
    return 0;
}
