
#include<iostream.h>
void main()
{
	int t;
	cout<<"please input t:";
	cin>>t;
if(t>=100)
					switch(t/1000)
				{
					case 0:cout<<"��ֵ100~999\n";break;
					default:cout<<"��ֵ1000����\n";
				}
else
		if(t<=99)
			switch(t/10)
		{
case0:cout<<"����ֵС��10\n";break;
case1:
case2:
case3:
case4:
case5:
case6:
case7:
case8:
case9:cout<<"����ֵ10~99\n";break;
		}
}

