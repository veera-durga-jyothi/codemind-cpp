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
    int c=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]%2==0)
        {
            if(arr[i-1]%2!=0 && arr[i+1]%2!=0)
            {
                c++;
            }
            
        }
       
            
        
    }
    cout<<c;
}