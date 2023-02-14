#include<iostream>
using namespace std;
class Reverse
{
	private:
		char str[20];
	public:
		void set_string()
		{
			cout<<"Enter your string";
			cin>>str;
		}
		void show()
		{
			cout<<endl<<str;
		}
		void operator!();
};
void Reverse::operator!()
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65&&str[i]<=96)
		{
			str[i]=str[i]+32;
		}
		else
		if(str[i]>=97&&str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}
	cout<<"REVERSE STRING IS :"<<str;
}
int main()
{
	Reverse R1;
	R1.set_string();
	R1.show();
	cout<<endl<<endl;
	R1.operator!();
	return 0;
}
