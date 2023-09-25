#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, k;
    cin >> n >> a >> b >> k;
    string str;
    cin >> str;

    int left = 0, right = 0, total = 0;
    for (int i = 0; i < n; ++i)
    {
        if (str[i] == '0')
        {
            right = i;
            if (right - left + 1 == b)
            {
                total++;
                left = right = i + 1;
            }
        }
        else
        {
            left = right = i + 1;
        }
    }

    int shoots = total - a + 1;

    cout << shoots << endl;
    left = 0, right = 0;
    for (int i = 0; i < n && shoots > 0; ++i)
    {
        if (str[i] == '0')
        {
            right = i;
            if (right - left + 1 == b)
            {
                cout << i + 1 << " ";
                shoots--;
                left = right = i + 1;
            }
        }
        else
        {
            left = right = i + 1;
        }
    }
    return 0;
}