#include<iostream.h>
#define N 10
void main()
{
	int i;
	int a[10];
	cout<<"请输入十个数: "<<endl;
		for(i=0;i<10;i++)
			cin>>a[i];
		void inv(int*x,int n);
	    inv(a,10);
		for(i=0;i<10;i++)
		  cout<<a[i]<<" ";
		  cout<<endl;
}
void inv(int*x,int n)
{
	int temp,*p,*q,m=9/2;
	p=x;q=x+10-1;
	for(;p<=x+m;p++,q--)
	{
		temp=*p;
		*p=*q;
		*q=temp;
	}
}
