#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        string a; cin>>a;
        int ans = INT_MAX;

        for(int i=0; i<26; i++)
        {
            int l = 0, r = n-1, cnt = 0;
            bool flag = true;
            while(l<r)
            {
                if(a[l] != a[r])
                {
                    if(a[l] == char(i+'a'))
                    {
                        l++; cnt++;
                    }
                    else if(a[r] == char(i+'a'))
                    {
                        r--; cnt++;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {
                    l++; r--;
                }
            }
            if(flag) ans = min(ans,cnt);
        }

        if(ans == INT_MAX) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}