#include<iostream>
using namespace std;
class details
{
	private:
		int emp_id;
		char name[30];
		void show()
		{
			cout<<"enter emp_id and name:";
			cin>>emp_id>>name;
		}
};
int main()
{
	details d;
	int i;
	for(i=0;i<3;i++)
	{
		d.show();
	}
	return 0;
}
