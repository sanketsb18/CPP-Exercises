/* program to find sum of array elements */

#include<iostream>
using namespace std;
#define size 100

int main(){
    int n, i, arr[size], sum=0;

    cout << "Enter the size of array:";
    cin >> n;

    cout << "Enter the array elements:\n";

    for (i=0; i<n; i++){
        cout << "Element - "<< i << ":";
        
        cin >> arr[i];

        sum += arr[i];
    }


    cout << "Sum of all array elements : " << sum;
    cout << "\n";

    return 0;
}