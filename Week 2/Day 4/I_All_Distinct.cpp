#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int a[n];

        bool found[10005];
        for(int i=0; i<n; i++)
        {
            found[i] = false;
        }
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(!found[a[i]])
            {
                found[a[i]] = true;
                v.push_back(a[i]);
            }
        }

        int mx = 0, cnt = 0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i] > mx)
            {
                cnt++;
                mx = v[i];
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}