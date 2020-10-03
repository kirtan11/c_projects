#include<iostream>
#include<sys/time.h>
#include<time.h>
using namespace std;

int main()
{
	int a=0,b=1,c;
	int n,i;
	struct timeval t1,t2;
	struct timezone z1,z2;
	gettimeofday(&t1,&z1);
	cout<<"enter number here:  ";
	cin>>n;
	if(n==0)
	{ }
	else if(n==1)
	{	cout<<"  "<<a;	}
	else if(n==2)
	{	cout<<"  "<<a;cout<<"  "<<b; }
	else
	{	cout<<"  "<<a;cout<<"  "<<b;
		for(i=2;i<n;i++)
		{
			c=a+b;
			a=b;
			b=c;
			cout<<"  "<<c;
		}
	}
	gettimeofday(&t2,&z2);
	cout<<"\n time :   "<<t2.tv_usec - t1.tv_usec<<"\n";
return 0;
}

