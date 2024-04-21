#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int a,b,c; cin>>a>>b>>c;
        int cntA = 0, cntB = 0;
        
        cntA = a-1;

        if(b < c)
        {
            int up = c-b;
            int down = c-1;
            cntB = up + down;
        }

        else if(b > c)
        {
            int down = b-c;
            int more_down = c-1;
            cntB = down + more_down;
        }

        if(cntA < cntB) cout<<1<<endl;
        else if(cntA > cntB) cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}