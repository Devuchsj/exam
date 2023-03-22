#include<iostream>
#include<string.h>
using namespace std;

class Mother
{
	public:
	void display()
	{
		cout<<"I'm mother of one daughter"<<endl;
	}
	
};

class Daughter : public Mother
{
	public:
	void display()
	{
		cout<<"I'm daughter"<<endl;
	}
	
};


int main()
{
	Mother m1;
	Daughter d1;
	m1.display();
	d1.display();
	return 0;
}
