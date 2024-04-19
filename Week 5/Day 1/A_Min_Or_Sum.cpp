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
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        ll OR = 0;
        for(int i=0; i<n; i++)
        {
            OR|=a[i];
        }
        cout<<OR<<endl;
    }
    return 0;
}