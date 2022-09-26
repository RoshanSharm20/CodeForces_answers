#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cost, extra;
    cin >> cost >> extra;
    // int count = 1;
    int i = 1;
    if ((cost <= 9) && (extra % cost == 0))
    {
        cout << (extra / cost) << endl;
    }
    else
    {
        while (true)
        {
            if (((10 * i) % cost) == 0)
            {
                cout << ((10 * i) / cost) << endl;
                break;
            }
            else if (((10 * i) + extra) % cost == 0)
            {
                cout << ((10 * i) + extra) / cost << endl;
                break;
            }
            else
            {
                i++;
            }
        }
    }
}