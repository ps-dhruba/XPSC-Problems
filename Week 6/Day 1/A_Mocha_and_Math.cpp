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

        int val = a[0];
        for(int i=0; i<n; i++)
        {
            val = val&a[i];
        }

        cout<<val<<endl;
    }
    return 0;
}