#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        string a; cin>>a;

        int ls = 0, rs = 0;
        
        for(int i=0; i<2; i++)
        {
            if(a[i] == '1') ls++;
        }
        for(int i=2; i<4; i++)
        {
            if(a[i] == '1') rs++;
        }
        
        int a1 = 1, a2 = 1;
        if(ls == 1) a1 = 11;
        else if(ls == 2) a1 = 21;

        if(rs == 1) a2 = 11;
        else if(rs == 2) a2 = 21;

        if(ls == 0 && rs == 0) cout<<0<<endl;
        else cout<<a1*a2<<endl;
    }
    return 0;
}