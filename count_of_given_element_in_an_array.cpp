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
    int l;
    cin>>l;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==l)
        {
            c++;
        }
        
    }
    cout<<c;
}