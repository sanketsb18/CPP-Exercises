/*Find the cube of given number.*/

#include<iostream>
using namespace std;

double cube(double num);

int main(){
int num;
double c;

cout << "Enter the number:";
cin >> num;

c=cube(num);
cout << "Cube of " << num <<" is " << c << "\n";

    return 0;
}

double cube(double num){
return(num*num*num);

}