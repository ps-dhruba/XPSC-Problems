#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        int diff = INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(b[i] == 0 and b.size() == 1) diff = a[i]-b[i];
            else if(b[i] != 0) diff = min(diff, a[i]-b[i]);
        }

        if(diff<0) cout<<"NO"<<endl;
        else
        {
            for(int i=0; i<n; i++)
            {
                a[i] = a[i] - diff;
                if(a[i] < 0) a[i] = 0;
            }

            bool flag = true;
            for(int i=0; i<n; i++)
            {
                if(a[i] != b[i])
                {
                    flag = false;
                    break;
                }
            }

            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}