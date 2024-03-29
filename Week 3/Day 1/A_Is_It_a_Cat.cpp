#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;

        int m=0, e=0, o=0, w=0, i=0;
        bool flag = true;

        if(a[i] == 'm' || a[i] == 'M')
        {
            while(a[i] == 'm' || a[i] == 'M' && i<n)
            {
                m=1;
                i++;
            }
        }
        else flag = false;

        if(a[i] == 'e' || a[i] == 'E')
        {
            while(a[i] == 'e' || a[i] == 'E' && i<n)
            {
                e=1;
                i++;
            }
        }
        else flag = false;

        if(a[i] == 'o' || a[i] == 'O')
        {
            while(a[i] == 'o' || a[i] == 'O' && i<n)
            {
                o=1;
                i++;
            }
        }
        else flag = false;

        if(a[i] == 'w' || a[i] == 'W')
        {
            while(a[i] == 'w' || a[i] == 'W' && i<n)
            {
                w=1;
                i++;
            }
        }
        else flag = false;

        if(m==1 && e==1 && o==1 && w==1 && i==n && flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}