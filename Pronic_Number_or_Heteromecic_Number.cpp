#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=0;
    for(int i=1;i<=56/2;i++)
    {
        if(i*i+1==n)
        {
            f++;
            break;
        }
    }
    if(f==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}