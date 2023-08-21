#include <iostream>
using namespace std;
void sum (int,int);    //func declaration
void sum1();
main()
{
    int a,b;
    cout << "Enter the two no\n";
    cin >> a >> b;
    sum(a,b);
}
void sum(int x, int y)
{
    int c = x+y;
    cout << "sum is: " << c;
}