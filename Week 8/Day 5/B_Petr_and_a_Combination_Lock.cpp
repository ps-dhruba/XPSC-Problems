#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    bool flag = false;
    int x = (1<<n);

    for(int i=0; i<x; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            if(i&(1<<j)) sum+=a[j];
            else sum-=a[j];
        }

        if(sum%360 == 0)
        {
            flag = true;
            break;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}