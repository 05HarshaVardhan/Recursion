#include<bits/stdc++.h>
using namespace std;

void Takeinput()
{
	#ifndef a
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

bool isSorted(int arr[],int n)
{
    if(n==0||n==1)
    return true;
    if(arr[0] > arr[1])
    return false;
    else
    return isSorted(arr+1,n-1);
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
    if(isSorted(x,n))
    cout<<"Is sorted";
    else
    cout<<"Is not sorted";
}