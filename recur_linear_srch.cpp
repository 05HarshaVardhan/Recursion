#include<bits/stdc++.h>
using namespace std;

void Takeinput()
{
	#ifndef a
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int ls(int arr[],int n,int t,int i)
{
    if(n==0)
    return -1;
    if(arr[0]==t)
    return i;
    return ls(arr+1,n-1,t,i+1);
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
    int i=0;
    int pos = ls(x,n,t,i);
    cout<<pos;
}