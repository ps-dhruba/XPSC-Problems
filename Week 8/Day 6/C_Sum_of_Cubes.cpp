#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxN = 1e4;

int main() {
    vector<ll> v;
    for (int i = 1;i <= maxN;i++) 
    {
        v.push_back(pow(i, 3));
    }

    int tc; cin>>tc;
    while (tc--) 
    {
        ll x; cin>>x;
        bool found = false;

        for (int i = 0;i < maxN;i++) 
        {
            if (v[i] >= x) 
            {
                break;
            }
            int l = 0, r = maxN - 1, mid;
            ll need = x - v[i];
            bool ok = false;
            while (l <= r) 
            {
                mid = l + (r - l) / 2;
                if (v[mid] == need) 
                {
                    ok = true;
                    break;
                }
                else if (v[mid] > need) 
                {
                    r = mid - 1;
                }
                else 
                {
                    l = mid + 1;
                }
            }
            if (ok) {
                found = true;
                break;
            }
        }

        if (found) 
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}