#include <iostream>
using namespace std;
int main()
{
    int a[10],n,i;
    cout << "Enter the size of the array\n";
    cin >> n;
    cout << "Enter the elements of the array:\n";
    for (i = 0; i <= n-1 ; i++){
        cin >> a[i];
    }
    cout << "The respective elements of the array are:\n";
    for (i = 0; i <= n-1; i++){
        cout << a[i] << " ";
    }
    return 0;
}