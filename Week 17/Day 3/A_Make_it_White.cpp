#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int sz;
        cin>>sz;
        string a;
        cin>>a;
        int ind;
        for(int i=0; i<a.size();i++)
        {
            if(a[i] == 'B')
            {
                ind = i;
                break;
            }
        }
        int ind2;
        for(int i=0; i<a.size();i++)
        {
            if(a[i] == 'B')
            {
                ind2 = i;
            }
        }
        cout<<(ind2-ind)+1<<endl;
    }
    return 0;
}