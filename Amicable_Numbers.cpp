#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int sum=0,mul=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    for(int j=1;j<=m/2;j++)
    {
        if(m%j==0)
        {
            mul=mul+j;
        }
    }
    if(sum==m && mul==n)
    {
        cout<<"Amicable";
    }
    else
    {
        cout<<"Not Amicable";
    }
}