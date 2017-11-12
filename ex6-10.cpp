#include <iostream.h>
float fun(double h)
{
	double H;
	int a,b;
	a=(int)(h*1000)%10;
	b=h*100;
	if(a>4)
		b+=1;
	H=b/(double)100;
	return H;
}
void main()
{
	double h;
	cout<<"ÇëÊäÈëhµÄÖµ£º"<<endl;
	cin>>h;
	cout<<fun(h)<<endl;
}


		
