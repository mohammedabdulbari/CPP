#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;

    cout << "Enter a Positive Number: ";
    cin >> num;
    n = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    cout << " The Reverse of the Number is: " << rev << endl;

    if (n == rev)
        cout << " The Number is a Palindrome";
    else
        cout << " The Number is Not a Palindrome";

    return 0;
        
}
