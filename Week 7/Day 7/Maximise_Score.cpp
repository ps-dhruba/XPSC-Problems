#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        int ans = INT_MAX;
        for(int i=1; i<n-1; i++)
        {
            int c1 = abs(a[i-1] - a[i]);
            int c2 = abs(a[i+1]-a[i]);

            c1 = max(c1,c2);
            ans = min(ans,c1);
        }

        ans = min(ans, abs(a[0]-a[1]));
        ans = min(ans, abs(a[n-1]-a[n-2]));

        cout<<ans<<endl;
    }
    return 0;
}