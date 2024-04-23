#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        int a = 1, b =0;
        int cnt = 0;
        while(a*2 <= n)
        {
            a*=2;
            cnt++;
        }
        for(int i = cnt-1; i>=0; i--)
        {
            if(n&1<<i)
            {
                b = b | (1<<i);
            }
        }

        cout<<b<<" "<<a<<endl;
    }
    return 0;
}