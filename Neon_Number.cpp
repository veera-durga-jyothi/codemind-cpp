#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=n*n;
    int sum=0;
    while(s!=0)
    {
        int rem=s%10;
        sum=sum+rem;
        s=s/10;
        
    }
    if(sum==n)
    {
        cout<<"Neon Number";
    }
    else
    {
        cout<<"Not Neon Number";
    }
}