#include<iostream>
#include<string.h>
using namespace std;
class CString
{
	public:
		char str[20];
	public:
		void get_str()
		{
			cout<<"Enter string";
			cin>>str;
		}
		void display()
		{
			cout<<str<<endl;
		}
		CString operator+(CString x)
		{
			CString s;
			strcpy(s.str,str);
			strcat(s.str,x.str);
			return s;
		}
		int operator==(CString &t);
		
};
int CString::operator==(CString &t)
{
	for(int i=0;str[i]!='\0';i++)
	{
		for(int j=0;str[j]!='\0';j++)
		{
			if(str[i]==t.str[j])
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
}
int main()
{
	CString s1,s2,s3;
	int result=0;
	s1.get_str();
	s2.get_str();
	cout<<"\n-------------------------------------------";
	cout<<"FIRST STRING";
	s1.display();
	
	cout<<"\n\n SECOND STRING IS";
	s2.display();
	
	cout<<"\n----------------------------------------";
	s3=s1+s2;
	cout<<"\n\n CONCATINATION STRING";
	s3.display();
	result=s1==s2;
	if(result==0)
	{
		cout<<"\n\nBoth String are Equal";
	}
	else
	{
		cout<<"\n\n BOTH STRING ARE NOT EQUAL";
	}
	return 0;
	
	
}
