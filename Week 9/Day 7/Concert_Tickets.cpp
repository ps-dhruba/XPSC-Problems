#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin>>n>>m;
    vector<int> t(n);
    vector<int> c(m);
    set<pair<int,int>> st;
    
    for(int i=0; i<n; i++)
    {
        cin>>t[i];
        st.insert({t[i],i});
    }

    for(int i=0; i<m; i++) cin>>c[i];
    for(int i=0; i<m; i++)
    {
        auto m = st.lower_bound({c[i]+1,0});
        if(m == st.begin()) cout<<-1<<endl;
        else
        {
            m--;
            cout<<(*m).first<<endl;
            st.erase(m);
        }
    }
    return 0;
}