#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        string st;
        cin >> st;
        int count = 1;
        bool contains = false;

        for (int i = 0; i < st.size(); ++i)
        {
            if (st[i] == '?')
            {
                contains = true;
                if (i == 0)
                    count *= 9;
                else
                    count *= 10;
            }
        }

        if (contains)
        {
            if (st[0] == '0')
                cout << 0 << endl;
            else
                cout << count << endl;
        }
        else
        {
            if (st[0] == '0')
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
    }
    return 0;
}