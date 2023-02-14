#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
		void set(int x,int y)
		{
			real=x;
			img=y;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
	friend Complex operator+(Complex,Complex);	
};
Complex operator+(Complex c1,Complex c2)
{
	Complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return temp;
}
int main()
{
	Complex c1,c2,c3;
	c1.set(2,3);
	c2.set(4,5);
	c1.display();
	c2.display();
	cout<<endl<<"after addition";
	c3=operator+(c1,c2);
	c3.display();
	
	return 0;
	
}
