/* Arrays */ 

#include<iostream>
using namespace std;
#define size 100
int arr[size];
int n;

int main()
{
    int arr1[5]= {1,2,3,4,5};
    char arr2[5]={'a', 'b', 'c', 'd', 'e'};
    cout << "Enter the size of an array:";
    cin >> n;

    int i;

    for (i = 0; i < n; i++){
        cout << "Enter "<< i << " element of array:";
        cin >> arr[i];
    }

    for (i = 0; i < n; i++){
        cout << "\n The " << i << " element of arr is: " << arr[i];
    }

    cout << " \n ";

    for (i = 0; i < 5; i++){
        cout << arr1[i] << "\t";
        cout << arr2[i] << "\n";
    }
       return 0;

}