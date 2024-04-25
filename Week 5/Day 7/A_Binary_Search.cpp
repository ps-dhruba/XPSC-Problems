#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    while(k--)
    {
        int key; cin>>key;
        int l = 0, r = n-1, mid;
        bool flag = false;
        while(l<=r)
        {
            mid = (l+r)/2;
            if(a[mid] == key)
            {
                flag = true;
                break;
            }
            else if(a[mid] < key)
            {
                l = mid+1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}