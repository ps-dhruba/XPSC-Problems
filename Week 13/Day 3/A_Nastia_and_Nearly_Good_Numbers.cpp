#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n1,n2; cin>>n1>>n2;

        if(n2 == 1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        
        if(n2 == 2) n2+=2;
        cout<<"YES"<<endl;
        cout<<n1<<" "<<n1*(n2-1)<<" "<<n1*n2<<endl;
    }
    return 0;
}