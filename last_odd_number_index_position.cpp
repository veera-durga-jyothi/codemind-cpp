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
    vector<int>r;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            r.push_back(i);
            
        }
        
    }
    cout<<r[r.size()-1];
}