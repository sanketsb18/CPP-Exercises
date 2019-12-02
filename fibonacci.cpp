#include<iostream>
using namespace std;

int main() {

    // 0 1 1 2 3 5 8 ...

    int a = -1, b = 1, c = 0;

    while (c < 100) {
        c = a + b;
        a = b;
        b = c;
        cout<< c << " ";
    }
    return 0;
} 

