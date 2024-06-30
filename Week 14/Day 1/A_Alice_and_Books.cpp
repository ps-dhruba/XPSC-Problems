#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int> a(n);
        int mx = INT_MIN, second_mx = INT_MIN, ind = -1;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i] > mx)
            {
                mx = a[i];
                ind = i;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(a[i] > second_mx && ind != i) second_mx = a[i];
        }

        if(mx == a[n-1]) cout<<mx+second_mx<<endl;
        else cout<<mx+a[n-1]<<endl;
    }
    return 0;
}