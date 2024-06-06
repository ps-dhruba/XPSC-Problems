#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        ll ans = 0;
        pbds<int> p;
        for(int i=n-1; i>=0; i--)
        {
            ans+= p.order_of_key(a[i]);
            p.insert(a[i]);
        }

        cout<<ans<<endl;
    }
    return 0;
}