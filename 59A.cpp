#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int countl = 0;
    int counth = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= 65 && s[i] <= 90)
            counth++;
        else
            countl++;
    }
    if (counth == countl)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    else if (counth < countl)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    else
    {
        for (int i = 0; i < s.size(); ++i)
        {
            s[i] = toupper(s[i]);
        }
        cout << s << endl;
    }
}