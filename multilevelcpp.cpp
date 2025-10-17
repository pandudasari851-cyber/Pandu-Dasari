#include<iostream>
using namespace std;
class a
{
	protected:
		int x;
		void get()
		{
			cout<<"enter number x:";
				cin>>x;
		}
};
 class b:public a
 {
 	protected:
 		int y;
 		void getb()
 		{
 			get();
 			cout<<"enter number y:";
				cin>>y;
		 }
		 void showb()
		 {
		 
		 	cout<<"add="<<x+y<<endl;
		 }
 };
 class c:public b
 {
 	public:
 		int z;
 		void getc()
 		{
 			getb();
 			showb();
 			cout<<"enter number z:";
				cin>>z;
		 }
		 void showc()
		 {
		 	
		 	
		 	
		 	cout<<"multiply="<<x*y*z;
		 }
 };
 int main()
 {
 	c C;
 	C.getc();
 	C.showc();
 }
