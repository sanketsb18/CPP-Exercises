#include<iostream>
using namespace std;

int main() {

    int a = 20;
    int b = 20;

    int i = 0;

    // if else
    /*
        if (condition) {
            true statements;
        }
        else {
            false statements;
        }
    */

    if (a < b) {
        cout << "a is less than b\n";
    }
    else if (a == b) {
        cout << "a and b are equal\n";
    }
    else {
        cout << "a is greater than b\n";
    }

    if (a < b) {
        cout << "a is less than b\n";
    }
    else {
        if (a == b) {
            cout << "a and b are equal\n";
        }
        else {
            cout << "a is greater than b\n";
        }
    }

    // Loops
    /*
        while(condition) {
            statements;
            incr/decr;
        }
    */
    
    while(i < 10) {
        if(i % 2 == 0) 
            cout <<"Codekul - ";
        else 
            cout <<"The Gurukul for Coders!\n";
        i++;
    }

    /*
        do {
            statements;
            incr/decr;
        }while(condition);
    */
    i = 30;
    do {
        cout << "Codekul\n";
        i++;
    } while(i < 10);


    /*
        for(initialisation; condition; incr/decr) {
            statements;
        }
    */

    for (i = 0; i < 10; i++) {
        cout << "Codekul\n";
    }

    return 0;
}