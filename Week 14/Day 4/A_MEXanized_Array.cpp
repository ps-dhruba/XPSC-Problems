#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n, mex, x; cin>>n>>mex>>x;
        if(mex > n) cout<<-1<<endl;
        else
        {
            int ans = 0, mx = 0;
            for(int i=0; i<mex; i++)
            {
                ans+=i;
                mx = i;
            }
            if(mx > x) ans = -1;
            else if(mx == x-1)
            {
                int rem = n-mex;
                ans+= rem*(x-1);
            }
            else
            {
                int rem = n-mex;
                ans+= rem*x;
            }

            cout<<ans<<endl;
        }
    }
    return 0;
}