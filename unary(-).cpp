#include<iostream>
using namespace std;
class Number
{
	int x,y,z;
	public:
	Number()
	{
		x=0;
		y=0;
		z=0;
	}	
	void set(int m,int n,int p)
	{
		x=m;
		y=n;
		z=p;
	}
	void show()
	{
		cout<<"Before unary minus";
		cout<<x<<y<<z;
	}
	Number operator-()
	{
		x=-x;
		y=-y;
		z=-z;
	}
};
int main()
{
	Number n;
	n.set(1,2,3);
	n.show();
	-n;
	cout<<"\nafter unaary minus ";
	n.show();
	return 0;
}
