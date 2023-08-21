#include <iostream>
using namespace std;
int main(){
    int n,i,a[10],j,temp;
    cout << "Enter the range of the array\n";
    cin >> n;
    cout << "Enter the array elements:\n";
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    for (i = 0; i < n; i++){
        for(j = 0; j <= n-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout << "The sorted array is:\n";
    for (i = 0; i < n; i++)
    cout << a[i] << " ";
    return 0;
}