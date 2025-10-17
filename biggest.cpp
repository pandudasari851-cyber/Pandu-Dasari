#include<iostream>
using namespace std;
inline int biggest (int a, int b)
{
	return(a>b?a:b);
}
int main()
{
	biggest(40,25);
	cout<<"biggest number="<<biggest(40,25);
	return 0;
}
