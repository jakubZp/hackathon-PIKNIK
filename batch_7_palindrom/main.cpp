#include <iostream>

using namespace std;

bool palindrom(string text)
{
    int p = 0;
    int q = text.length() - 1;
    while (p<=q)
    {
        if(text[p] != text[q])
        {
            if (text[p] == 32) p++;
            if (text[q] == 32) q--;
            if (text[p] != text[q])
                return 0;
        }
        p++;
        q--;
    }
    return 1;
}

int main()
{
    string t;
    getline(cin,t);

    cout << palindrom(t);

    return 0;
}
