#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    vector<bool> rows(n + 1, true), columns(n + 1, true);
    long long row_available = n, columns_available = n;

    for (int i = 0; i < m; ++i)
    {
        long long row, col;
        cin >> row >> col;

        if (rows[row])
        {
            rows[row] = false;
            row_available--;
        }

        if (columns[col])
        {
            columns[col] = false;
            columns_available--;
        }

        cout << row_available * columns_available << " ";
    }
    return 0;
}