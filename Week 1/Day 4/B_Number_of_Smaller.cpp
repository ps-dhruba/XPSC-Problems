#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    int i=0, j=0, ans=0;
    while(j<m)
    {
        while(b[j]>a[i] && i<n)
        {
            ans++;
            i++;
        }
        j++;
        cout<<ans<<" ";
    }
    return 0;
}