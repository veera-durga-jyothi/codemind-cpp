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
        //sum=sum*10+rem;
        a.push_back(rem);
        n=n/10;
    }
    sort(a.begin(),a.end());
    cout<<a[a.size()-1];
}