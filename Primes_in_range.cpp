#include<bits/stdc++.h>
using namespace std;
int n=1000001;
vector<bool>primes(1000001,true);
void Gen_seive()
{
    primes[0]=primes[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(primes[i]==true)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                primes[j]=false;
            }
        }
    }
    
}
int main()
{
    Gen_seive();
    int a,b;
    cin>>a;
    cin>>b;
    int c=0;
    
    for(int i=a;i<=b;i++)
    {
        if(primes[i]==true)
        {
            c++;
        }
    }
    cout<<c;
}