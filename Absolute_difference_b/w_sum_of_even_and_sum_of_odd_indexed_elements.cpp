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
    int e=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            e=e+arr[i];
        }
        else
        {
            o=o+arr[i];
        }
    }
    cout<<e-o;
}