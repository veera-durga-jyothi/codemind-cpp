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
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0 && i%2==0)
        {
            f++;
            break;
        }
    }
    if(f==0)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}