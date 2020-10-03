#include<iostream>
#include<sys/time.h>
#include<time.h>
using namespace std;

int main()
{
	int a=0,b=1,c;
	int n,i;
	cout<<"enter number here:  ";
	cin>>n;
	if(n==0)
	{ }
	else if(n==1)
	{	cout<<"  "<<a;	}
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
	
return 0;
}


