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
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    vector<int>r;
    int f=0;
    for(auto it:mp)
    {
        if(it.first==it.second)
        {
            f++;
            r.push_back(it.first);
        }
    }
    sort(r.begin(),r.end());
    if(f==0)
    {
        cout<<"-1";
    }
    else{
    cout<<r[0]<<" "<<r[r.size()-1];}
}