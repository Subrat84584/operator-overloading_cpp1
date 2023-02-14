#include<iostream>
using namespace std;
class Complex
{
    private:
	int real,img;
	public:
	void setData(int x,int y)
	{
		real=x;
		img=y;
		}
		void show()
		{
			cout<<real<<"+"<<img<<"i";
			cout<<endl;
			}
			Complex operator-(Complex c)
			{
				Complex temp;
				temp.real=real-c.real;
				temp.img=img-c.img;
				return temp;
				}	
};
int main()
{
	Complex c1,c2,c3;
	c1.setData(2,3);
	c2.setData(4,5);
	c1.show();
	c2.show();
	c3=c1-c2;
	c3.show();
	cout<<endl;
}
