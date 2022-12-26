#include<iostream>

using namespace std;
int x,y,z;
int u,r,s,t,w;
void FibonacciRepresentation();
int main()
{
	cin>>x>>y>>z;
	FibonacciRepresentation();
	x=x%z;
	w=x;
	u=1;
	do
	{
		if (t>=r)
		{
			t=t-r;
			u= (u*w)%z;
		}
		int temp=r;
		r=s-r;
		s=temp;
		int temp2=x;
		x=w;
		w=(temp2*w)%z;
	}while(r<s);
	cout<<u;
	return 0;
}
void FibonacciRepresentation()
{
	int k=1,h=1;
	do
	{
		int temp=k;
		k=h;
		h=temp+h;
	}while(y>=h);
	r=1,s=1,t=t-t;
	int check=y;
	do
	{
		if(check>=k)
		{
			check=check-k;
			t=t+s;
		}
		int temp2=k;
		k=h-k;
		h=temp2;
		int temp3=r;
		r=s;
		s=temp3+s;
	}while(k<h);
}
