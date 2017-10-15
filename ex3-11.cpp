#include <iostream.h>
void main()
{
	int t;
	cout<<"Please input t:"<<endl;
	cin>>t;
	if(t<=10)
		cout<<":其数值小于10"<<endl;
	else
		if(t>10&&t<=99)99
			cout<<":其数值10~99"<<endl;
		else
			if(t>=100&&t<=999)
				cout<<":其数值在100~999之间"<<endl;
			else
				cout<<":其数值1000以上"<<endl;
}
