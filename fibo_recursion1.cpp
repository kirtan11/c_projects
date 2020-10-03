#include<iostream>
using namespace std;
#include<stdlib.h>

void fibo(int);
int main()
{
	int n;
	cout<<"enter no here:  ";
	cin>>n;
	if(n==1)
	{ cout<<"0  "; }
	else
	{
		cout<<"0  ";
		cout<<"1  ";
		fibo(n-2);
	}
return 0;
}

void fibo(int n)
{
	int n1=0,n2=1,n3;
		n3 = n2 + n1;
		n1 = n2;
		n2 = n3;
		cout<<n3<<"  ";
		fibo(n-1);
}
