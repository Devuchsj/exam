#include<iostream>
#include<string.h>

using namespace std;

class Shape
{
	public:
	char shape[100];
	void display()
	{
		cout<<"enter name of shape"<<endl;
		cin>>shape;
	}
	
};
class Square : public Shape
{
	public:
		int a;
		void setData()
		{
			cout<<"enter number=";
			cin>>a;
		}
		void getData()
		{
			cout<<"sq of number"<<a*a<<endl;
		}
	
};
class Cube : public Shape
{
	public:
		int b;
		void setData1()
		{
			cout<<"enter number2=";
			cin>>b;
		}
		void getData1()
		{
			cout<<"cube of number"<<b*b*b<<endl;
		}
	
};

int main()
{
	Shape s2,c2;
	//s1.display();
	s2.setData();
	s2.getData();
	c2.setData1();
	c2.getData1();
	return 0;
}
