/* program to print all negative elements in the array. */

#include<iostream>
using namespace std;
#define size 100

int main(){

    int arr[size], i, n;

    cout << "Enter the array size:";
    cin >> n;

    cout << "Enter the elements of array:\n";
        for(i=0; i<n; i++){
        cout << "Element - "<< i << ":";
        cin >> arr[i];

        }

        cout << "All Negative elements of array are :";

            for (i=0; i<n; i++){

                if(arr[i]<0){

                    cout <<  arr[i] << " ";
                }
                
            }
        cout << "\n";

    return 0;
}