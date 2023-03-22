#include<iostream>
#include<string.h>

using namespace std;

class Highschool
{
	private:
		int id,rollno,std,age,contact;
		char name[100];
		char add[100];
		static char schoolname[100];
	public:
		void setData()
		{
			cout<<"enter id";
			cin>>id;
			cout<<"enter rollno";
			cin>>rollno;
			cout<<"enter std";
			cin>>std;
			cout<<"enter age";
			cin>>age;
			cout<<"enter cont";
			cin>>contact;
			cout<<"enter name";
			cin>>name;
			cout<<"enter add";
			cin>>add;
		//	cout<<"enter schoolname";
	    //	cin>>schoolname;
		
		}	
		void getData()
		{
			cout<<"enter id"<<id<<""<<"enter rollno"<<rollno<<""<<"enter std"<<std<<""<<"enter age"<<age<<""<<"enter cont"<<contact<<""<<"enter name"<<name<<""<<"enter add"<<add<<""<<"enter schoolname"<<schoolname<<""<<endl;
		}
	
};
    	char Highschool::schoolname[]="sankul";
 
class College
{
	
	private:
		int id,rollno,std,age,contact;
		char name[100];
		char add[100];
		static char Collname[100];
	public:
		void setData()
		{
			cout<<"enter id";
			cin>>id;
			cout<<"enter rollno";
			cin>>rollno;
			cout<<"enter std";
			cin>>std;
			cout<<"enter age";
			cin>>age;
			cout<<"enter cont";
			cin>>contact;
			cout<<"enter name";
			cin>>name;
			cout<<"enter add";
			cin>>add;
			//cout<<"enter collname";
			//cin>>Collname;
	
		}    
		void getData()
		{
						cout<<"enter id"<<id<<""<<"enter rollno"<<rollno<<""<<"enter std"<<std<<""<<"enter age"<<age<<""<<"enter cont"<<contact<<""<<"enter name"<<name<<""<<"enter add"<<add<<""<<"enter schoolname"<<Collname<<""<<endl;

		}
};
	    	char College::Collname[]="scet";
	    	
int main()
{
	Highschool s1;
	College c1;
	s1.setData();
	s1.getData();
	
	c1.setData();
	c1.getData();
	
}	    	


    	
