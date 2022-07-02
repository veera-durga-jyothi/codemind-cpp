#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    while(n!=0)
    {
        int rem=n%10;
        a.push_back(rem);
        n=n/10;
    }
    
    map<int,int>mp;
    for(int i=0;i<a.size();i++)
    {
        mp[a[i]]++;
    }
    int f=0;
    for(auto it:mp)
    {
        if(it.second>1)
        {
            f++;
        }
    }
    if(f==0)
    {
        cout<<"Unique Number";
    }
    else
    {
        cout<<"Not Unique Number";
    }
    
        
        
    
}