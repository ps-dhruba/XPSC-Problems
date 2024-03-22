#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;

    int i=0, j=0, cnt=0;
    while(i < a.size())
    {
        if(a[i] != b[j])
        {
            i++; j++; cnt++;
        }
        else
        {
            i++; j++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}