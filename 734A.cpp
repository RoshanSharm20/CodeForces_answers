#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int acount = 0, dcount = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'A')
            acount++;
        else
            dcount++;
    }
    if (acount > dcount)
        cout << "Anton" << endl;
    else if (dcount > acount)
        cout << "Danik" << endl;
    else if (dcount == acount)
        cout << "Friendship" << endl;

    return 0;
}