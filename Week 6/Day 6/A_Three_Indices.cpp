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

        bool flag = false;

        for(int i=1; i<n-1; i++)
        {
            if(a[i] > a[i-1] && a[i] > a[i+1])
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                flag = true;
                break;
            }
        }

        if(!flag) cout<<"NO"<<endl;
    }
    return 0;
}