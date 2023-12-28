#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int n;
        cin >> n;
        int count = 0;
        while (n > 0)
        {
            n = n >> 1;
            count++;
        }

        cout << (1 << (count - 1)) - 1 << endl;
    }
    return 0;
}