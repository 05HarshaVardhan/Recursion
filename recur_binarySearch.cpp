#include<bits/stdc++.h>
using namespace std;

void Takeinput()
{
	#ifndef a
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int bs(int arr[],int n,int t,int l,int h)
{
    if(l>h)
    return -1;
    int m = (l+h)>>1;
    if(arr[m]==t)
    return m;
    if(arr[m]>t)
    return bs(arr,n,t,l,m-1);
    else
    return bs(arr,n,t,m+1,h);
}

int main()
{
    Takeinput();
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int t;
    cin>>t;
    /*for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }*/
    int l=0;
    int h = n-1;
    int pos = bs(x,n,t,l,h);
    cout<<pos;
}