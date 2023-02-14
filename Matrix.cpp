#include<iostream>
using namespace std;
class Matrix
{
	private:
		int a[3][3];
		public:
			int i,j;
			void set()
		   {
				for(i=0;i<=2;i++)
				{
					for(j=0;j<=2;j++)
					{
						cin>>a[i][j];
					}
				}
			}
			void show()
			{
				for(i=0;i<=2;i++)
				{
					for(j=0;j<=2;j++)
					{
						cout<<a[i][j]<<"   ";
					}
					cout<<endl;
				}
			}
			void operator-()
			{
			  for(i=0;i<=2;i++)
			   {
				  for(j=0;j<=2;j++)
				   {
					  a[i][j]=-a[i][j];
				   }
			   }
			}	
};
int main()
{
	Matrix m;
	m.set();
	cout<<"Matrix is:"<<endl;
	m.show();
	cout<<"Matrix is:"<<endl;
	-m;
	m.show();
	return 0;
}
