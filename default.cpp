#include<iostream>
using namespace std;
class  rectangle
{
	    private:
		int length,breadth;
		public:
		rectangle ()
		{
			
			cout<<"enter length and breadth:";
				cin>>length>>breadth;
			
			}	
			void show()
			{
				cout<<"area="<<length*breadth;
			}
};
int main()
{
	rectangle r;	
	r.show();
	return 0;
}
