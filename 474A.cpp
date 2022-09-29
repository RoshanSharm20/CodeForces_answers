#include <bits/stdc++.h>
using namespace std;
int main()
{
    char shift;
    string chstring;
    cin >> shift;
    cin >> chstring;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    if (shift == 'R')
    {
        for (int i = 0; i < chstring.size(); ++i)
        {
            auto it = find(s.begin(), s.end(), chstring[i]);
            int index = it - s.begin();
            chstring[i] = s[index - 1];
        }
    }
    else
    {
        for (int i = 0; i < chstring.size(); ++i)
        {
            auto it = find(s.begin(), s.end(), chstring[i]);
            int index = it - s.begin();
            chstring[i] = s[index + 1];
        }
    }
    cout << chstring << endl;
}