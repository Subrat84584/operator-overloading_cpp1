#include<iostream>
using namespace std;
class unary
{
   private:
   int a;
   public:
   unary()
   {
    	a=0;
   }
   unary operator++()
   {
   	unary u;
   	u.a=++a;
   	return u;
   }
   unary operator--()
   {
   	unary temp;
   	temp.a=--a;
   	return temp;
   }
   void dispaly()
   {
   	cout<<"a="<<a<<endl;
   }
};
int main()
{
	unary u1,u2;
	u1.dispaly();
	u2.dispaly();
	u2=++u1;
	u1.dispaly();
	u2.dispaly();
	u2=--u1;
	u1.dispaly();
	u2.dispaly();
	return 0;
}
