#include<iostream.h>
void fun(int *p)
{
	int i,n,m,temp;
	n=m=0;
	for(i=1;i<10;i++)
		if(*(p+n)>*(p+i))
			n=i;
		for(i=1;i<10;i++)
			if(*(p+m)<*(p+i))
				m=i;
	 temp=*(p+m);
	 *(p+m)=*(p+n);
	 *(p+n)=temp;
}
void main()
{
	int a[10],i,*p;
	cout<<"请输入数组a[10]:"<<endl;
	for(i=0;i<10;i++)
	cin>>a[i];
	p=a;
	fun(p);
    cout<<"调整后的数组 :"<<endl;
	for(i=0;i<10;i++)
		cout<<*(p+i)<<" "<<endl;
}









