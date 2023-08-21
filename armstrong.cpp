//WTP to accept an element form an user and check wether the element is armstrong or not
// 153 = 1^3 + 5^3 + 3^3;

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,d;
    cout<<"Enter a number: ";
    cin>>n;
    int s{0}, x{n};
    while(n!=0){
        d = n%10;
        s += (int)pow(d, 3);
        n /= 10;
    }
    if(s == x){
        cout<<"You have entered an armstrong number"<<endl;
    }
    else{
        cout<<"The number entered is not an armstrong number"<<endl;
    }
    return 0;
}