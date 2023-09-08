#include<bits/stdc++.h>
using namespace std;

void Takeinput()
{
	#ifndef a
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int sum(int arr[],int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return arr[0];
    return arr[0]+sum(arr+1,n-1);
    
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
    /*for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }*/
    int ans = sum(x,n);
    cout<<ans;
}