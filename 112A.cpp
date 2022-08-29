#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int res = 0;
    for (int i = 0; i < s1.size(); ++i)
    {
        char si = (char)tolower(s1[i]);
        char sj = (char)tolower(s2[i]);
        if (si < sj)
        {
            cout << "-1" << endl;
            res = 1;
            break;
        }
        if (si > sj)
        {
            cout << "1" << endl;
            res = 1;
            break;
        }
    }
    if (res == 0)
        cout << "0" << endl;
}