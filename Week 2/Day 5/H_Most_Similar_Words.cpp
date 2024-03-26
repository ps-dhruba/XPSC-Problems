#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, sz;
        cin>>n>>sz;

        vector<string> s(n);
        for(int i=0; i<n; i++) cin>>s[i];

        int mn = INT_MAX;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i != j)
                {
                    int ans = 0;
                    string s1 = s[i];
                    string s2 = s[j];

                    for(int k=0; k<sz; k++)
                    {
                        ans+= abs((s1[k] - 'a') - (s2[k] - 'a'));
                    }
                    mn = min(ans, mn);
                }
            }
        }

        cout<<mn<<endl;
    }
    return 0;
}