#include<bits/stdc++.h>
using namespace std;

bool remove(vector<int>&a, int val, int n)
{
    int i=0, j=n-1;
    while(i<j)
    {
        if(a[i] == val) i++;
        else if(a[j] == val) j--;
        else if(a[i] != a[j]) return false;
        else
        {
            i++; j--;
        }
    }

    return true;
}

int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        bool palindrome = true;
        int i=0, j=n-1;
        while(i<j)
        {
            if(a[i] != a[j])
            {
                palindrome = remove(a,a[i],n) || remove(a,a[j],n);
                break;
            }
            i++; j--;
        }

        if(palindrome) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}