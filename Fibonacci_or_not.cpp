#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    if(n==0 || n==1)
    {
        cout<<"True";
    }
    int f=0;
    for(int i=2;i<=n;i++)
    {
        int c=a+b;
        if(c==n)
        {
            f++;
            break;
        }
        else
        {
            a=b;
            b=c;
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