#include<bits/stdc++.h>
using namespace std;

void Takeinput()
{
	#ifndef a
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void sayDigit(int n,vector<string>v)
{
    if(n==0)
    return;
    sayDigit(n/10,v);
    int d = n%10;
    cout<<v[d]<<" ";
}

int main()
{
    Takeinput();
    int n;
    cin>>n;
    vector<string>vec(10);
    vec[0] = "Zero";
    vec[1] = "One";
    vec[2]  = "Two";
    vec[3] = "Three";
    vec[4] = "Four";
    vec[5] = "Five";
    vec[6] = "Six";
    vec[7] = "Seven";
    vec[8] = "Eight";
    vec[9] = " Nine";
    sayDigit(n,vec);

    
}