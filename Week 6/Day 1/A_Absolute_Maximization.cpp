#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int ans = 0;
        for(int i=0; i<=12; i++)
        {
            bool one = false, zero = false;
            for(int j=0; j<n; j++)
            {
                bitset<13> b(a[j]);
                one|= (b[i] == 1);
                zero|= (b[i] == 0);
            }

            if(one && zero)
            {
                ans+= (1<<i);
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}