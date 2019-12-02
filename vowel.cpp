#include <iostream>
using namespace std;
int main()
{
    char c;
    int lcvowel, ucvowel;
    cout << "Enter an alphabet: ";
    cin >> c;
    
    // evaluates to 1 (true) if c is a lowercase vowel
    lcvowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    ucvowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    // evaluates to 1 (true) if either Lowercase Vowel or Uppercase Vowel is true
    if (lcvowel || ucvowel)
        cout << c << " is a vowel.\n";
    else
        cout << c << " is a consonant.\n";
    return 0;
}