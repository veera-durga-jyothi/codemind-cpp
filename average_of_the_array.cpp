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
    double sum=0;
    double s=0;
    for(int i=0;i<n;i++)
    {
        s++;
        sum=sum+arr[i];
    }
    double res;
    res=sum/s;
    std::cout<<std::fixed<<std::setprecision(2)<<res;
}