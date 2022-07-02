#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=0;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else if(n%3==0)
        {
            n=n/3;
        }
        else if(n%5==0)
        {
            n=n/5;
        }
        else
        {
            f=1;
            cout<<"Not Ugly Number";
            break;
        }
    }
    if(f!=1)
    {
        cout<<"Ugly Number";
    }
}