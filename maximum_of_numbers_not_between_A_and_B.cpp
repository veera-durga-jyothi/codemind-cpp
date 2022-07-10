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
    int a,b;
    cin>>a>>b;
    int t=0,f=0;
    vector<int>r;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            t++;
            
        }
        else
        {
            f++;
            r.push_back(arr[i]);
        }
    }
    sort(r.begin(),r.end());
    if(f==0)
    {
        cout<<"-1";
    }
    else
    {
        cout<<r[r.size()-1];
    }
    
    
        
    
}