#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int a,b; cin>>a>>b;
        if(a > b) swap(a,b);
       
        if(2*a >= b && (a+b)%3 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}