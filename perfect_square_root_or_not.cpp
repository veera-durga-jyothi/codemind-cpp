#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=0;
    for(int i=1;i<=n/2;i++)
    {
        if(i*i==n)
        {
            f++;
        }
        
    }
    if(f==0)
    {
        cout<<"False";
    }
    else
    {
        cout<<"True";
    }
}