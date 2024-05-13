#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int> a(n);
        
        if(n%2 == 0)
        {
            int m = n/2;
            for(int i=1; i<=n; i++)
            {
                if(i == m) cout<<n<<" ";
                else cout<<i<<" ";
            }
        }
        else
        {
            for(int i=1; i<=n; i++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}