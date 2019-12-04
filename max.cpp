/* prog to find the greatest number between three numbers. */

#include<iostream>
using namespace std;

int main (){

    int n1, n2, n3;

    /* Take the numbers n1. n2, n3 input. */

    cout << "Enter the number n1:";
    cin >> n1;
    cout << "Enter the number n2:";
    cin >> n2;
    cout << "Enter the number n3:";
    cin >> n3;


    /* check the greatest number using relational and logical operators. */

    if(n1>n2 && n1>n3){

        cout << "n1 is greater.\n";
    }
    else if (n2>n1 && n2>n3){

        cout << "n2 is greater.\n";
    
    }
    else {
        cout << "n3 is greater\n";
    }

    return 0;
}