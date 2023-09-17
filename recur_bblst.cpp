#include<bits/stdc++.h>
using namespace std;

void Takeinput()
{
	#ifndef a
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
void sort(int *arr,int n)
{
    if(n ==0 || n==1)
    return;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    sort(arr,n-1);
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
    sort(x,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
    

}