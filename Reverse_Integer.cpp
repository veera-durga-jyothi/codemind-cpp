#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    int s=0;
    while(n!=0)
    {
        int rem=n%10;
        //a.push_back(rem);
        s=s*10+rem;
        n=n/10;
        
    }
    cout<<s;
    
   /* for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
    }*/
}