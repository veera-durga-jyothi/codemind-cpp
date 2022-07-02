#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,p=1;
    while(n!=0)
    {
        int rem=n%10;
        sum=sum+rem;
        p=p*rem;
        n=n/10;
    }
    if(sum==p)
    {
        cout<<"Spy Number";
    }
    else
    {
        cout<<"Not Spy Number";
    }
}