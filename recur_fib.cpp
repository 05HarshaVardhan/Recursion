#include<bits/stdc++.h>
using namespace std;

void Takeinput()
{
	#ifndef a
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int fib(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    int s = fib(n-1)+fib(n-2);
    return s;
}

int main()
{
    Takeinput();
    int n;
    cin>>n;
    int ans = fib(n);
    cout<<ans;
}