#include <iostream.h>
void main()
{
	int j,n=0;
	char str1[20],str2[20],str3[40];
	cout<<"������Ҫ�����ĵ�һ���ַ���"<<endl;
	cin>>str1;
	cout<<"������Ҫ�����ĵڶ����ַ���"<<endl;
	cin>>str2;
	for(j=0;str1[j]!='\0';j++)
	{
		str3[n]=str1[j];n++;
	}
	str3[n]=' ';n++;/*����strcat�������ַ����������м䱣��һ�ո�*/
	for(j=0;str2[j]!='\0';j++)
	{
		str3[j]=str2[j];n++;
	}
	str3[n]='\0';
	cout<<"��������ַ���Ϊ��"<<str3<<endl;
} 