#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int> a(n);

        int neg = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i] < 0) neg++;
        }

        ll sum = 0;
        if(neg%2 == 0)
        {
            for(int i=0; i<n; i++)
            {
                sum+= abs(a[i]);
            }
        }

        else
        {
            int mn = INT_MAX;
            for(int i=0; i<n; i++)
            {
                if(abs(a[i]) < mn)
                {
                    mn = abs(a[i]);
                }
            }

            for(int i=0; i<n; i++)
            {
                sum+=abs(a[i]);
            }

            sum-= 2*mn;
        }

        cout<<sum<<endl;
    }
    return 0;
}