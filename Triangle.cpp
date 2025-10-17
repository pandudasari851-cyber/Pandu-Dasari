#include<iostream>
using namespace std;
class Triangle
{
	private:
		int area;
		public:
		Triangle()
		{
			int l,b,h;
			l=2;
			b=3;
			h=4;
			area=l*b*h;
			}	
			public:
				Triangle(int l,int b,int h)
				{
					area=l*b*h;
				}
				void show()
				{
					cout<<"area="<<area;
				}
				
};
int main()
{
	Triangle t;
	Triangle t1(6,7,8);
	t.show();
	t1.show();
	return 0;
}
