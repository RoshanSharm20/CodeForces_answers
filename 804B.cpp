#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int mod = 1e9 + 7;

    int steps = 0, no_b = 0;
    for (int i = str.size() - 1; i >= 0; --i)
    {
        if (str[i] == 'b')
            no_b++;
        else
        {
            steps += no_b;
            no_b *= 2;

            steps %= mod;
            no_b %= mod;
        }
    }
    cout << steps << endl;
    return 0;
}