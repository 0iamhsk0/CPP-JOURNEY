#include <iostream>
using namespace std;
int main()
{
    int a[20],n,i;
    cout << "Enter the range of the array";
    cin >> n;
    cout << "Enter all the elements of the array";
    for (i = 0; i <= n-1; i++){
        cin >> a[i];
    }
    cout << "The final created array is:";
    for (i = 0; i <= n-1; i++){
        cout << a[i];
    }
    return 0;
}
