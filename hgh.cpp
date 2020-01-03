// CPP program to demonstrate 
// modf() function 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	// Taking positive value 
	double k = 2.3, p, fraction; 

	// Breaks k into two parts 
	fraction = modf(k, &p); 

	cout << k << " =>"; 
	cout << "\tInteger Value = " << p 
		<< endl << "\tFraction Value = "
		<< fraction << endl; 

	// Taking negative value 
	k = -8.3; 
	fraction = modf(k, &p); 

	cout << k << " =>"; 
	cout << "\tInteger Value = " << p 
		<< endl << "\tFraction Value = "
		<< fraction << endl; 

	return 0; 
} 
