#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // string s1,s2,s3;
    // s1="H";
    // s2="Q";
    // s3="9";
    bool check = false;
    for (int i = 0; i < s.size(); ++i)
    {
        if ((s[i] == 'H') || (s[i] == 'Q') || (s[i] == '9'))
        {
            check = true;
            break;
        }
    }
    if (check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}