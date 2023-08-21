#include <iostream>
using namespace std;
class A{
    static int a;
    public:
    void add(){
    a += 1;}
    void print(){
    cout << "a value is :\n" << a;}
};
int A::a;
int main(){
    A fn1,fn2;
    fn1.add();
    fn2.print();
}