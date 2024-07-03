#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<pair<int,int>> a(n);
        for(int i=0; i<n; i++) cin>>a[i].first>>a[i].second;

        int strength = a[0].first, endu = a[0].second;

        for(int i=1; i<n; i++)
        {
            if(a[i].second >= endu)
            {
                if(a[i].first >= strength)
                {
                    strength = -1;
                    break;
                }
            }
        }

        cout<<strength<<endl;
    }
    return 0;
}