#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n-1; i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        if(v[i] != i+1)
        {
            ans = i+1;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}