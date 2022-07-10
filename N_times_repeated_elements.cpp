#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    int c=0;
    vector<int>r;
    for(auto it:mp)
    {
        if(it.second==t)
        {
            r.push_back(it.first);
            
            c++;
        }
    }
    if(c==0)
    {
        cout<<"-1";
    }
    else
    {
        for(int i=0;i<r.size();i++)
        {
            cout<<r[i]<<" ";
        }
    }
}