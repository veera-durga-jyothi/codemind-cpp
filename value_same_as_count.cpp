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
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    int c=0;
    for(auto it:mp)
    {
        if(it.first==it.second)
        {
            c++;
        }
    }
    cout<<c;
}