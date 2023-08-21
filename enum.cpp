#include <iostream>
using namespace std;
int main()
{
    enum days{sun ,mon, tue, wed, thu, fri, sat};
    days day1, day2; //2 objects are declared;
    day1 = sun;
    day2 = sat;
    cout << day1 << " " << day2;
    if (day1 > day2)
    cout << "\n Day 1 comes after Day2";
    else
    cout << "\n Day 1 comes before Day2";
    return 0;
}