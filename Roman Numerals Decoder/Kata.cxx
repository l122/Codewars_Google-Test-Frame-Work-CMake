#include "Kata.hxx"

using namespace std;

int solution(string roman)
{
    int r = 0;
    char s = roman.front();
    switch (s)
    {
    case 'I':
        r = 1;
        break;
    case 'V':
        r = 5;
        break;
    case 'X':
        r = 10;
        break;
    case 'L':
        r = 50;
        break;
    case 'C':
        r = 100;
        break;
    case 'D':
        r = 500;
        break;
    case 'M':
        r = 1000;
        break;
    default:
        cout << "undefined symbol: " << s << endl;
        break;
    }

    if (roman.length() == 1)
        return r;

    int n = solution(roman.substr(1));
    
    return (n/r > 4) ? n - r : n + r;
}