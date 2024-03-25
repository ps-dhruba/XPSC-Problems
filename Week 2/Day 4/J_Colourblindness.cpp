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
        string a,b;
        cin>>a>>b;
        bool flag;
        for(int i=0; i<n; i++)
        {
            if(a[i] == 'G' && b[i] == 'B') flag = true;
            else if(a[i] == 'B' && b[i] == 'G') flag = true;
            else if(a[i] == 'R' && b[i] == 'R') flag = true;
            else if(a[i] == 'G' && b[i] == 'G') flag = true;
            else if(a[i] == 'B' && b[i] == 'B') flag = true;
            else
            {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}