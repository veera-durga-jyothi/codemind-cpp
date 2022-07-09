#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>r;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            r.push_back(i);
            
        }
    }
    int c=0;
    
    for(int i=0;i<r.size();i++)
    {
        int temp=r[i];
        int f=0;
        if(r[i]==1)
        {
            c++;
        }
            for(int j=2;j<=r[i]/2;j++)
            {
                if(r[i]%j==0)
                {
                    f++;
                    break;
                }
            }
            if(f!=0)
            {
                c++;
            }
            
        
        
    }
    cout<<c;
}