#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t > 0)
    {
        int i = 0;
        while (i < n - 1)
        {
            if ((s[i] == 'B') && (s[i + 1] == 'G'))
            {
                swap(s[i], s[i + 1]);
                i = i + 2;
            }
            else
            {
                i++;
            }
        }
        t--;
    }
    cout << s << endl;
}