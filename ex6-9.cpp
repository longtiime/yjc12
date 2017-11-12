#include <iostream.h>
void fun(int);
void main()
{
	int m;
	cout<<"请输入一个整数m："<<endl;
	cin>>m;
	fun(m);
}
void fun(int m)
{
	int n,i,a,b=0,leap;
	for(n=1;n<=m;n++)
	{
		i=n%7;
		a=n%11;
		if(i==0||a==0)
		{
			leap=1;
			n++;
			cout<<n<<endl;
		}
	}
	cout<<"b="<<b<<endl;
}


		
		