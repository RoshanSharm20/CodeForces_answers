#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin >> Q;
    for (int q = 0; q < Q; ++q)
    {
        int n;
        cin >> n;
        vector<int> sides(4 * n);
        for (int i = 0; i < 4 * n; ++i)
        {
            cin >> sides[i];
        }

        sort(sides.begin(), sides.end());

        bool possible = true;
        for (int i = 0; i < sides.size() - 1; i = i + 2)
        {
            if (sides[i] != sides[i + 1])
            {
                // cout << "NO" << endl;
                possible = false;
                break;
            }
        }
        int i = 0, j = sides.size() - 2;
        long long area = sides[0] * sides[(4 * n) - 1];
        while (possible && (i < j))
        {
            long long curr_area = sides[i] * sides[j];
            if (curr_area != area)
            {
                possible = false;
                break;
            }
            i = i + 2;
            j = j - 2;
        }
        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}