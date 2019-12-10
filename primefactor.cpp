/* prog to calculate the prime factor numbers using for loop. */

#include<iostream>
using namespace std;

int main() {

    int i = 0, j = 0, no = 0, flag = 0;
    cout << "Enter a number: ";
    cin >> no;
    cout << "Prime factors of "<< no <<" are: " ; 
    for (i = 2; i <= no; i++) {

        if (no % i == 0) {

            flag = 1;

            for( j = 2; j < i; j++) {

                if(i % j == 0) {

                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            
                cout <<i << " ";
        }
    }

    cout << "\n";
    return 0;
}