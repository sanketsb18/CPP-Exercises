#include<iostream>
using namespace std;

int main (){

    int number;

    cout << "Enter the number:";
    cin >> number;

    if (number >= 0){

    cout << "The integer is positive\n";
    
    }

    else {
    
    cout << "You have entered the negative integer.\n";

    }

    cout << "This line is always printed.\n";

    
        return 0;
}