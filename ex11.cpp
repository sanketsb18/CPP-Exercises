#include<iostream>
using namespace std;

int main(){
    int p, c, m, b;
    float percentage,total=0;
    cout<<"Enter the marks of physics :";
    cin >> p;

    cout<<"Enter the marks of chemistry :";
    cin>>c;

    cout<<"Enter the marks of mathematics:";
    cin>>m;

    cout<<"Enter the marks of biology :";
    cin>>b;

    total = p+c+m+b;
    cout << "The total marks are :" << total;

    percentage = total/4;
    cout << " The percentage is :" << percentage;



    return 0;
}