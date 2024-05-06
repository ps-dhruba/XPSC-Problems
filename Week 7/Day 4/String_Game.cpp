#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        string a; cin>>a;

        stack<char> st;
        bool flag = false;

        for(ll i=0; i<n; i++)
        {
            if(st.empty()) st.push(a[i]);
            else if(st.top() != a[i])
            {
                st.pop();
                flag = !flag;
            }
            else st.push(a[i]);
        }

        if(flag) cout<<"Zlatan"<<endl;
        else cout<<"Ramos"<<endl;
    }
    return 0;
}