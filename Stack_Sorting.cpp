#include<iostream>

using namespace std;

int main()
{
	int x,y,q;
	x=2,y=1;
	do
	{
		cin>>q;
		if(q>=1)
		{
			int temp2=x;
			x=q*x+y;
			y=temp2;
		}
	}while(q>=1);
	do
	{
		int temp1=x;
		q=x/y;
		x=y;
		y=temp1%y;
		if(y>=1)
			cout<<q<<" ";
	}while(y>=1);
	return 0;
}
