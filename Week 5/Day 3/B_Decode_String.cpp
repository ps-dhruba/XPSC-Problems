#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        string a; cin>>a;

        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            v[i] = int(a[i]-48);
        }

        vector<int> V;
        int i=0;
        while(i<n)
        {
            if(v[i] == 0)
            {
                i++;
            }
            else if(i+2<n && v[i+2] == 0 && (i+3>=n || v[i+3] != 0))
            {
                V.push_back(v[i]*10 + v[i+1]);
                i+=2;
            }
            else
            {
                V.push_back(v[i]);
                i++;
            }
        }
        for(int val : V)
        {
            cout<<char((val-1)+'a');
        }
        cout<<endl;
    }
    return 0;
}