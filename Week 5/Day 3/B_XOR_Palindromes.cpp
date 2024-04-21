#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        string s; cin>>s;
        string ans;

        int pairs = 0, obligatory = 0;
        int i = 0, j = n-1;

        while(i<j)
        {
            if(s[i] == s[j]) pairs+=2;
            else obligatory++;
            i++; j--;
        }

        for(int i=0; i<=n; i++)
        {
            int total = i;
            total-= obligatory;

            if(total < 0)
            {
                ans.push_back('0');
                continue;
            }

            total = max((total%2), total-pairs);
            total = max(0, total-(n%2));

            if(total == 0) ans.push_back('1');
            else ans.push_back('0');
        }

        cout<<ans<<endl;
    }
    return 0;
}