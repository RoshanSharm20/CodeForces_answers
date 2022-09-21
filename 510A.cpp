#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int count = 1;
    for (int i = 1; i <= r; ++i)
    {
        if ((i % 2) != 0)
        {
            for (int j = 1; j <= c - 1; ++j)
            {
                cout << "#";
            }
            cout << "#"
                 << endl;
        }
        else
        {
            if ((count % 2) != 0)
            {
                for (int j = 1; j <= c - 1; ++j)
                {
                    cout << ".";
                }
                cout << "#" << endl;
            }
            else
            {
                cout << "#";
                for (int j = 2; j <= c; ++j)
                {
                    cout << ".";
                }
                cout << "\n";
            }
            count++;
        }
    }
}