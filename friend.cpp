#include<iostream>
using namespace std;
class demo 
{
	private:
		int x;
		public:
			void get()
			{
				x=45;
			}
			friend void sum(demo &d);
};
void sum(demo &d)
{
	int y=85;
	d.x=8269;
	cout<<"sum of x and y= "<<d.x+y;
}
int main()
{
	demo d;
	d.get();
	sum(d);
	
}
