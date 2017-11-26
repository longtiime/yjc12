#include<iostream.h>
#include<stdio.h>
#define N 4
#define M 4
void main()
{
  int i,j,s=0;
  int a[N][M];
  cout<<"请依次输入16个数:"<<endl;
  {
     for(i=0;i<5;i++)
	   for(j=0;j<5;j++)
		  cin>>a[i][j];
  }  
   for(i=0;i<4;i++)
   {
	for(j=0;j<4;j++)
	{
	            if(i==j)
	            s+=a[i][j];
				if(i+j==3)
					s=s+a[i][j];
			    if(i<=1&&j>1&&j<3-i)
					a[i][j]=a[i][j]+1;
				if(i>=2&&j<i&&j>3-i)
					a[i][j]=a[i][j]-1;
	}
   }
			  cout<<s<<endl;
			  for(i=0;i<4;i++)
			  {
				  for(j=0;j<4;j++)
					  cout<<a[i][j]<<" ";
				  cout<<endl;
			  }
}
