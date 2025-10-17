#include<iostream>
using namespace std;
class student
{
	protected:
		string name;
	    int rollno;
	void getst()
	{
		cout<<"enter name and rolno:";
			cin >>name>>rollno;
}
};
class marks:public student
{
	protected:
		int m1,m2,m3,m4;
		void getm()
		{
			getst();
			cout<<"enter  marks:";
			cin>>m1>>m2>>m3>>m4;
		}
		void showm()
		{
			cout<<"name:"<<name<<endl;
			cout<<"rollno:"<<rollno<<endl;
		}
};
class sabl
{
	protected:
		int a1,a2,a3,a4;
		void gets()
		{
			cout<<"enter sabl marks:";
			cin>>a1>>a2>>a3>>a4;
		}
};
class percentage:public sabl,public marks
{
	public:
		
		void showp()
		{
		   
		   getm();
		   
		   gets();
		   showm();
		   cout<<"percentage:"<<(m1+m2+m3+m4)/4<<endl;
		   cout<<"sabl percentage:"<<(a1+a2+a3+a4)/4<<endl;
		   cout<<"total percentage:"<<(m1+m2+m3+m4+a1+a2+a3+a4)/8;
			
		}
};
int main()
{
	percentage p;
	p.showp();
}

