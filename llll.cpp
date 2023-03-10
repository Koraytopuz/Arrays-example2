#include<iostream>
using namespace std;
int dizi[5][5];
yazdir()
{
		
for(int i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	{
		cout<<dizi[i][j];
	}
	cout<<endl;
}
}
main ()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if((i==2) || (j==2)) dizi[i][j]=7;
			else dizi[i][j]=0;
		}
	}
	yazdir();
}

