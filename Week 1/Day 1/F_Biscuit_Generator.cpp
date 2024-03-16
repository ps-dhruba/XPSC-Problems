#include<bits/stdc++.h>
using namespace std;
int main()
{
    int active_time, biscuits, total_time;
    cin>>active_time>>biscuits>>total_time;

    int round = total_time/active_time;
    int total_biscuits = round * biscuits;

    cout<<total_biscuits<<endl;
    return 0;
}