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
        string s;
        cin>>s;

        bool flag = true;
        int t=0,ai=0,m=0,u=0,r=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'T') t++;
            else if(s[i] == 'i') ai++;
            else if(s[i] == 'm') m++;
            else if(s[i] == 'u') u++;
            else if(s[i] == 'r') r++;
            else flag = false;
        }
        if(!flag) cout<<"NO"<<endl;
        else
        {
            if(t==1 && ai==1 && m==1 && u==1 && r==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}