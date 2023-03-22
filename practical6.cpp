#include<iostream>
#include<string.h>

using namespace std;

class RBI
{
	public:
		int p,r,t;
		int rateofint;
		void RBI(int p,int r,int t)
		{
			this->p=p;
			this->r=r;
			this->t=t;
		}
		
};
class SBI:public RBI
{
	public:
		int p,r,t;
		int rateofint;
		getROI(int p,int r,int t)
		{
			cout<<"interest of SBI"<<p*r*t<<endl;
		}
	
};
class BOB:public RBI
{
	public:
		int p,r,t;
		int rateofint;
		getROI(int p,int r,int t)
		{
			cout<<"interest of BOB"<<p*r*t<<endl;
		}
	
	
};
