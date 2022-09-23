#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int available = 0;
    int unknown = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x > 0)
            available += x;
        else
        {
            if (available == 0)
                unknown++;
            else
            {
                available -= 1;
            }
        }
    }
    cout << unknown << endl;
}