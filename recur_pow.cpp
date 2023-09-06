#include<bits/stdc++.h>
using namespace std;

void Takeinput()
{
	#ifndef a
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int pow(int n)
{
    if(n==0)
    return 1;

    return 2*pow(n-1);
}

int main()
{
    Takeinput();
    int n;
    cin>>n;
    int ans = pow(n);
    cout<<ans<<endl;
}