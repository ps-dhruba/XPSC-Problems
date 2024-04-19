#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int> a(n);
        int x = 0, y = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            x^=a[i];
        }
        for(int i=0; i<n; i++) a[i]^=x;
        for(int i=0; i<n; i++) y^=a[i];
        
        if(y == 0) cout<<x<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}