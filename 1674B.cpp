#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        string s;
        cin >> s;
        if (s[0] < s[1])
        {
            cout << (25 * (s[0] - 'a')) + (s[1] - 'a') << endl;
        }
        else
        {
            cout << (25 * (s[0] - 'a')) + (s[1] - 'a') + 1 << endl;
        }
    }
    return 0;
}