#include <iostream.h>
void main()
{
	int j,n=0;
	char str1[20],str2[20],str3[40];
	cout<<"请输入要串联的第一个字符串"<<endl;
	cin>>str1;
	cout<<"请输入要串联的第二个字符串"<<endl;
	cin>>str2;
	for(j=0;str1[j]!='\0';j++)
	{
		str3[n]=str1[j];n++;
	}
	str3[n]=' ';n++;/*依照strcat函数两字符串串联后中间保留一空格*/
	for(j=0;str2[j]!='\0';j++)
	{
		str3[j]=str2[j];n++;
	}
	str3[n]='\0';
	cout<<"串联后的字符串为："<<str3<<endl;
} 