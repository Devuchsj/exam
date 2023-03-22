#include<iostream>
#include<string.h>

using namespace std;

class employee
{
	
	private:
		int id,salary,exp,contact;
		char name[100];
		char add[100];
		char role[100];
		char email[100];
		
		public:
		void setData()
		{
			cout<<"enter id";
			cin>>id;
			cout<<"enter role";
			cin>>role;
			cout<<"enter salary";
			cin>>salary;
			cout<<"enter exp";
			cin>>exp;
			cout<<"enter cont";
			cin>>contact;
			cout<<"enter name";
			cin>>name;
			cout<<"enter add";
			cin>>add;
			cout<<"enter email";
			cin>>email;
	   }
	   
	   void getData()
	   {
	   	 			cout<<"enter id"<<id<<""<<"enter role"<<role<<""<<"enter salary"<<salary<<""<<"enter exp"<<exp<<""<<"enter cont"<<contact<<""<<"enter name"<<name<<""<<"enter add"<<add<<""<<"enter email"<<email<<""<<endl;

	   }

		
	
};

int main()
{
	employee e1,e2,e3,e4,e5;
	e1.setData();
	e1.getData();
	e2.setData();
	e2.getData();
	e3.setData();
	e3.getData();
	e4.setData();
	e4.getData();
	e5.setData();
	e5.getData();
	
}

