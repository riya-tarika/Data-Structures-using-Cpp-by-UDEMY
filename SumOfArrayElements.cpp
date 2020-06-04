#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
    return 0;
}