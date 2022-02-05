#include <iostream>
using namespace std;

bool checkPal(string inp)
{
    string reverse = "";
    for (int i = 0; i < inp.size(); i++)
    {
        reverse = inp[i] + reverse;
    }
    return reverse == inp;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    if (checkPal(s))
    {
        cout << "The string is palindrome.\n";
    }
    else
    {
        cout << "The string is not palindrome.\n";
    }
}