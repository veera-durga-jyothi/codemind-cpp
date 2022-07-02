#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r=n*n;
    int sum=0;
    while(n!=0)
    {
        int rem=n%10;
        sum=sum*10+rem;
        n=n/10;
        
    }
    int res=sum*sum;
    int s=0;
    while(res!=0)
    {
        int x=res%10;
        s=s*10+x;
        res=res/10;
        
    }
    
    if(s==r)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}