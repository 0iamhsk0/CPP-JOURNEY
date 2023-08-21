#include <iostream>
using namespace std;
int main()
{
    int a[10],n,i,temp,min,j,loc;
    cout << "Enter the range of the array\n";
    cin >> n;
    cout << "Enter the array elements\n";
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    for (i = 0; i < n; i++){//n no.of passes to find the smallest no.
        min = a[i];
        loc = i;
        for (j = i+1; j <= n-1; j++){
            if (a[j] < min){
                min = a[j];
                loc = j;
            }
        }
        temp = a[j];
        a[j] = a[loc];
        a[loc] = temp;
    }
    cout << "The sorted array is:\n";
    for (i = 0; i < n; i++)
    cout << a[i] << ' ';
    return 0;
}