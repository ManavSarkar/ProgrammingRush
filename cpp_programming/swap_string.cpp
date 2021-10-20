#include <iostream>
using namespace std;

int main()
{
    string a = "Like";
    string b = "Subscribe";

    a = a + b;
    b = a.substr(0, a.length() - b.length());
    a = a.substr(b.length(), a.length());

    cout << a << " " << b;

    return 0;
}
