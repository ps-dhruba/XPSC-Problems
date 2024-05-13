#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a.begin(), a.end());

        vector<int> b(n);
        for(int i=0; i<n; i++) cin>>b[i];
        sort(b.begin(),b.end());

        for(int i=0; i<n; i++)
        {
            int diff = b[i] - a[i];
            if(diff != 0)
            {
                a[i]+=1;
            }
        }

        if(a == b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}