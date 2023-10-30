#include <iostream>

using namespace std;

int main()
{
    int one, two, four, eight, binary, number;

    cout << "Enter a four digit binary number: ";
    cin >> binary;

    eight = (binary / 1000) * 8;
    four = ((binary % 1000) /100) * 4 ;
    two = (((binary % 1000) % 100) /10) * 2; 
    one = ((((binary % 1000) % 100)) % 10) * 1;
    number = eight + four + two + one;

    cout << "The interger is: " << number; 

    return 0;
}