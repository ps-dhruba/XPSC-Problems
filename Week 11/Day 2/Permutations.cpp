#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    if(n == 1)
    {
        cout<<"1"<<endl;
        return 0;
    }

    vector<int> even;
    vector<int> odd;
    for(int i=1; i<=n; i++)
    {
        if(i%2 == 0) even.push_back(i);
        else odd.push_back(i);
    }

    if(even.back() - odd.front() == 1) cout<<"NO SOLUTION"<<endl;
    else
    {
        for(auto val : even)
        {
            cout<<val<<" ";
        }
        for(auto val : odd)
        {
            cout<<val<<" ";
        }
    }
    return 0;
}