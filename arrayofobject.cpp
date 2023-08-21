//create a cpp program having private data members id. with class name int
//create a member fumction to get the record and print the record of 3 employees

#include<iostream>
using namespace std;
class emp
{
	int id;
	public:
		void getdata( );
		void putdata();
};
void emp::getdata( )
{
	cout<<"\n Enter the id of employee: ";
	cin>>id;
}
void emp::putdata()
{

	cout<<"\n Entered age is:"<<id;
}
//const int size=3;
int main()
{
	emp ob[3];
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"\n Enter details of employee number"<<i+1;
		ob[i].getdata();
	}
	for(i=0;i<3;i++)
	{
		cout<<"\nDetails of the employee number"<<i+1;
		ob[i].putdata();
	}
	return 0;
}