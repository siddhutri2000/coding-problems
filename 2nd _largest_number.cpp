#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int a[n],i,res,j,p=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    res = a[n-1];

    for(i=n-2;i>=0;i--)
    {
        if(a[i]<res)
        {
           res = i;
           p=1;
        }
    }

    if(p==1)
    {
        cout<<a[res]<<endl;
    }
    else
    {
        cout<<"No 2nd largest"<<endl;
    }

    return 0;

} 


