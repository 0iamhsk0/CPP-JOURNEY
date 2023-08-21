#include <iostream>
using namespace std;
int main()
{
    char name[20];
    cout <<"Enter your name \n";
    cin.getline(name,30);
    //cin >> name;
    cout << "Entered name is: \n" << name;
    return 0;
}

