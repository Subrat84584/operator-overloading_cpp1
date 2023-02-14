#include<iostream>
using namespace std;
class Time
{
	private:
		int hr,min,sec;
	public:
		Time()
		{
			hr=min=sec=0;
		}
		
		friend int operator>>(istream &is,Time &t)
		{
			cout<<"\n Enter Hours  :  ";
			is>>t.hr;
			cout<<"\n Enter Minutes  :  ";
			is>>t.min;
			cout<<"\n Enter the second:  ";
			is>>t.sec;
			t.min=t.min+t.sec/60;
			t.sec%=60;
			t.hr=t.hr+t.min/60;
			t.min%=60;
			if(t.hr>=25)
			return 1;
			else
			return 0;
		}
		friend void operator<<(ostream &os,Time &t)
		{
			os<<"\n Hour  :"<<t.hr;
			os<<"\n Min   :"<<t.min;
			os<<"\n Sec   :"<<t.sec;
		}
		int operator==(Time t)
		{
			int tot=hr*3600 + min * 60+  sec;
			int tot1=t.hr*3600 +t.min *60 +t.sec;
			if(tot==tot1)
			return 1;
			else
			return 0; 
		}
		~Time()
		{}
};
int main()
{
	Time t1,t2;
	cout<<"Enter The First time"<<endl<<"-----------------------";
	if(cin>>t1)
	{
		cout<<"\n invalid time";
		return 0;
	}
	cout<<"\n first time ";
	cout<<t1;
	cout<<"\nenter second time"<<endl<<"---------------------------";
	if(cin>>t2)
	{
		cout<<"\n invalid";
		return 0;
	}
	cout<<"\n second time";
	cout<<t2;
	if(t1==t2)
	cout<<"\n\n Time are same";
	else
	cout<<"\n\n Time are different";
	return 0;
}
