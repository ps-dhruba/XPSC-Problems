#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num == 0)
    {
        cout<<"0000"<<endl;
        return 0;
    }
    
    int tmp = num, cnt = 0;

    while(num)
    {
        cnt++;
        num = num/10;
    }
    
    int zero = 4-cnt;
    while(zero != 0)
    {
        cout<<"0";
        zero--;
    }
    cout<<tmp<<endl;
    return 0;
}