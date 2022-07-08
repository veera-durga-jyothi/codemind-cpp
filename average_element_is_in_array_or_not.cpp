#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    int s=0;
    for(int i=0;i<n;i++)
    {
        s++;
        sum=sum+arr[i];
    }
    int res=sum/s;
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==res)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}