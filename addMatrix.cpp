//matrrix addition
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
		Matrix operator+(Matrix m)
		{
			Matrix temp;
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=2;j++)
				{
					temp.a[i][j]=a[i][j]+m.a[i][j];
				}
			}
			return temp;
		}
		void show()
		{
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=2;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
		}
	
};
int main()
{
	Matrix m1,m2,m3;
	cout<<"ENTER FIRST MATRIX"<<endl;
	m1.set();
	m1.show();
	cout<<endl<<"ENTER SECOND MATRIX"<<endl;
	m2.set();
	m2.show();
	cout<<endl<<"ADDITION OF MATRIX"<<endl;
	m3=m1+m2;
	m3.show();
	return 0;
}
