#include<iostream>
using namespace std;
class preincrement
{
	int x,y;
	public:
		void get()
		{
			x=23;
			y=45;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y;
			
		}
		void operator +()
		{
			++x;
			++y;
		}
};
int main()
{
	preincrement p;
	p.get();
	+p;
	p.show();
		
}
