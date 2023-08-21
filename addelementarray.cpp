#include <iostream>
using namespace std;
int main()
{
    int n,i,pos,a[10],ele;
    cout << "Enter the size of the array:\n";
    cin >> n;
    cout << "Enter the elements of the array:\n";
    for (i=0;i<=n-1;i++){
        cin >> a[i];
    }
    cout << "Enter the pos u want to add the element:\n";
    cin >> pos;
    cout << "Enter the element you want to add:\n";
    cin >> ele;
    for (i=n-1;i>=pos;i--){
        a[i+1] = a[i];
    }
    a[pos] = ele;
    cout << "the final array is:\n";
    for (i=0;i <= n; i++){
        cout << a[i] << " ";
    }
    return 0;
}