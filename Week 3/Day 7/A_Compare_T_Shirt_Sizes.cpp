#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        string a,b;
        cin>>a>>b;
        char fc,sc;
        int fx = 0, sx = 0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i] != 'X') fc = a[i];
            else fx++;
        }
        for(int i=0; i<b.size(); i++)
        {
            if(b[i] != 'X') sc = b[i];
            else sx++;
        }

        if(fc == sc)
        {
            if(fx == sx || fc == 'M')
            {
                cout<<"="<<endl;
                continue;
            }
            if(fc == 'S')
            {
                if(fx > sx) cout<<"<"<<endl;
                else cout<<">"<<endl;
            }
            else if(fc == 'L')
            {
                if(fx > sx) cout<<">"<<endl;
                else cout<<"<"<<endl;
            }
            continue;
        }

        if(fc == 'S') cout<<"<"<<endl;
        else if(fc == 'M' && sc == 'L') cout<<"<"<<endl;
        else if(fc == 'M' && sc == 'S') cout<<">"<<endl;
        else if(fc == 'L') cout<<">"<<endl;
    }
    return 0;
}