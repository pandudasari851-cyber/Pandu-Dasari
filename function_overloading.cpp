#include<iostream>
using namespace std;
int add()
{
	int a,b,sum;
	cout<<"\nenter a,b ";
	cin>>a>>b;

	cout<<"\nsum="<<a+b;
}
int add( int a,int b)
{
	cout<<"\nenter a,b\n";
	
	cin>>a>>b;

	cout<<"\nsum="<<a+b;
}
int add(int a,int b,int c)
{
	cout<<"\nenter a,b,c ";
	
	cin>>a>>b>>c;

	cout<<"\nsum="<<a+b+c;
}
int main()
{
	int a,b,c;
	
	
	add();
	add(a,b);
	add(a,b,c);
	return 0;
	
}
