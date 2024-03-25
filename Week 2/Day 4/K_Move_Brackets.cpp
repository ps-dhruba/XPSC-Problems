#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        string a;
        cin>>n>>a;

        int ob = 0, cb = 0, ans = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i] == '(') ob++;
            else cb++;
            if(cb > ob)
            {
                ans+= cb - ob;
                ob = 0, cb = 0;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}