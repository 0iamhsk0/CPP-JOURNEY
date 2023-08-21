#include <iostream>
using namespace std;
int main()
{
    void f1();               //func is declared
    f1();                   //has no return type so func is called
    f1();
    f1();                    //func is called again
}
void f1()
{
    static int c = 2;
    c += 1;
    cout << "Value of c = " << c << endl;
}