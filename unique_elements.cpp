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
    vector<int>v;
    v.push_back(arr[0]);
    int t;
    
    for(int i=0;i<n;i++)
    {
        t=0;
        for(int j=0;j<v.size();j++)
        {
            if(arr[i]==v[j])
            {
                t++;
                break;
            }
        }
        if(t==0)
        {
            v.push_back(arr[i]);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
}