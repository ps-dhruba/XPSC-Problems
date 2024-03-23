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
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        vector<pair<int, int>> v;
        for(int i=0; i<n; i++)
        {
            int up = 0, down = 0;
            int sz;
            string s;
            cin>>sz>>s;
            for(int j=0; j<s.size(); j++)
            {
                if(s[j] == 'D') down++;
                else up++;
            }
            v.push_back({down, up});
        }

        for(int  i=0; i<n; i++)
        {
            a[i]+= v[i].first;
            a[i]-= v[i].second;
            if(a[i] >= 10) a[i] = a[i] - 10;
            else if(a[i] < 0) a[i]+= 10;
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}