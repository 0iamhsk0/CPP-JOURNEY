#include <iostream>
using namespace std;
int main()
{
    void print();  //initialization
    cout << "No parameters\n";
    print();  //calling 
}
void print(){
for (int i = 1; i <= 10; i++){
    cout << "5 * "<< i << " = " << 5*i <<"\n";
}
}
