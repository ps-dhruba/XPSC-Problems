#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b == c) cout<<"+"<<endl;
        else if(a-b == c || b-a == -c || -a - (-b) == -c) cout<<"-"<<endl;
    }
    return 0;
}