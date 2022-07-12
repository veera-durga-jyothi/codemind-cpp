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
    for(auto it:mp)
    {
        if(it.first==it.second)
        {
            r.push_back(it.first);
            
        }
    }
    double num=r.size();
    double sum=0;
    int f=0;
    for(int i=0;i<r.size();i++)
    {
        f++;
        sum=sum+r[i];
    }
    double tot=sum/num;
    //std::cout<<std::fixed<<std::setprecision(2)<<tot;
    if(f==0)
    {
        cout<<"-1";
    }
    else
    {
        std::cout<<std::fixed<<std::setprecision(2)<<tot;
    }
}