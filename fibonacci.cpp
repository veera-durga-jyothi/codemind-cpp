#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    vector<int>r;
    r.push_back(a);
    r.push_back(b);
    for(int i=2;i<n;i++)
    {
        int c=a+b;
        r.push_back(c);
        a=b;
        b=c;
        
    }
    for(int i=0;i<r.size();i++)
    {
        cout<<r[i]<<" ";
    }
}