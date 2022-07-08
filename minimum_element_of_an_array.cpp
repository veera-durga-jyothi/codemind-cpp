#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>r;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        r.push_back(arr[i]);
    }
    sort(r.begin(),r.end());
    cout<<r[0];
    
}