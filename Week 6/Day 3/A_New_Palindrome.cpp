#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        string a; cin>>a;
        if(a.size() % 2 == 1)
        {
            a.erase(a.begin() + a.size()/2);
        }
        if(a != string(a.size(), a[0]))
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}