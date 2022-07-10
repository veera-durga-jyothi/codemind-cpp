#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>e;
    vector<int>o;
    vector<int>r;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            e.push_back(arr[i]);
        }
        else
        {
            o.push_back(arr[i]);
        }
    }
    for(int i=0;i<o.size();i++)
    {
        r.push_back(o[i]);
        
    }
    for(int i=0;i<e.size();i++)
    {
        r.push_back(e[i]);
    }
    for(int i=0;i<r.size();i++)
    {
        cout<<r[i]<<" ";
    }
}