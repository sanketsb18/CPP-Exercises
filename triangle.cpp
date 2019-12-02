/* Program to check whether triangle is Equilateral triangle, Isocscele Triangle or Scalene Triangle.*/

#include<iostream>
using namespace std;

int main(){
    int s1,s2,s3;

    /* 
     Take the input of sides of Triangles
    */

    cout<<"Enter three sides of Triangle. \n";
    cout<< "s1:"; cin >> s1;
    cout<< "s2:"; cin >> s2;
    cout<< "s3:"; cin >> s3;


    /*
    Compare sides of triangle using using comparison operators.
    */

    if (s1==s2 && s1==s3){

        cout<<"It is Equilateral Triangle.\n";

    }

    else if(s1==s2 || s1==s3 || s2==s3){

        cout<<"It is Isosceles Triangle.\n";
    }

    else {

        cout<<"It is Scalene Triangle.\n";
    }

    return 0;
}