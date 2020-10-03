#include<iostream>
using namespace std;
#include<sys/time.h>
#include<time.h>
#include<stdlib.h>

void fibo(int);
int main()
{
	int n;
	struct timeval t1,t2;
	struct timezone z1,z2;
	gettimeofday(&t1,&z1);
	cout<<"enter no here:  ";
	cin>>n;
	if(n==1)
	{ cout<<"0  "; }
	else if(n==2)
	{ cout<<"1  "; }
	else
	{
		cout<<"0  ";
		cout<<"1  ";
		fibo(n-2);
	}
	gettimeofday(&t2,&z2);
	cout<<"\n\n time:  "<<t2.tv_sec - t1.tv_sec<<"\n";
return 0;
}

void fibo(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
	{
		n3 = n2 + n1;
		n1 = n2;
		n2 = n3;
		cout<<n3<<"  ";
		fibo(n-1);
	}
}
