#include<bits/stdc++.h>
using namespace std;

void solve(string a, int mid)
{
        while(mid!=0)
        {
            string s1,s2,ans;
            for(int i=0; i<mid; i++) s1 += a[i];
            for(int i=mid; i<a.size(); i++) s2 += a[i];
            int x = stoi(s1);
            int y = stoi(s2);
            ans = to_string(x)+to_string(y);

            if(ans == a && y>x)
            {
                cout << x << " " << y << endl;
                return;
            }  
            mid--;
        }
        cout << "-1\n";
}

int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        string a; cin>>a;
        int mid = a.size()/2;
        solve(a,mid);
    }
    return 0;
}