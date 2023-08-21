#include <iostream>
using namespace std;
int main()
{
    a[10],n,i,no,pos;
    cout << "Enter the range of the array:\n";
    cin >> n;
    cout << "Enter the elements:\n";
    for (i=0;i<=n-1;i++)
    cin >> a[i];
    cout << "Enter the element you want to delete:\n";
    cin >> no;
    for (i=0;i<=n-1;i++){
        if (a[i] != no)
        cout << "Element not found!\n";
        else:{
            cout >> "Element found!\n";
            a[i+1] = pos;
        }
    }
    cout >> "The final array"
   
}