#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;

    int frq[26] = {0};
    for(char c : a)
    {
        frq[c - 'a']++;
    }

    bool flag = false;

    for(int i=0; i<26; i++)
    {
        if(frq[i] == 0)
        {
            cout<<char(i+'a')<<endl;
            flag = true;
            break;
        }
    }

    if(!flag) cout<<"None"<<endl;
    return 0;
}