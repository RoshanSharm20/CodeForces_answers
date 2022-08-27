#include <iostream>
using namespace std;
int main()
{
    int res = 0;
    int mat[5][5];
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (mat[i][j] == 1)
            {
                res = (abs(2 - i)) + (abs(2 - j));
            }
        }
    }
    cout << res << endl;
}