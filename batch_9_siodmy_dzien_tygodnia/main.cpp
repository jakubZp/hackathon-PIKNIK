#include <iostream>

using namespace std;

int main()
{
    string day;
    int which, n;
    cin >> day >> n;
    n %= 7;
    if (day == "poniedzialek") which = 1;
    if (day == "wtorek")    which = 2;
    if (day == "sroda")     which = 3;
    if (day == "czwartek")  which = 4;
    if (day == "piatek")    which = 5;
    if (day == "sobota")    which = 6;
    if (day == "niedziela") which = 7;

    which += n;
    if(which > 7) which %= 7;

    switch(which)
    {
        case 1: cout << "poniedzialek"; break;
        case 2: cout << "wtorek"; break;
        case 3: cout << "sroda"; break;
        case 4: cout << "czwartek"; break;
        case 5: cout << "piatek"; break;
        case 6: cout << "sobota"; break;
        case 7: cout << "niedziela"; break;
    }

    return 0;
}
