#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int a=sum/n;
    //int x=floor(a);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=a)
        {
            c++;
        }
    }
    cout<<c;
}