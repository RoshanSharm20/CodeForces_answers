#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; ++i)
    {
        int count = 0;
        for (int j = 1; j <= 3; j++)
        {
            int val;
            cin >> val;
            if (val == 1)
                count++;
        }
        if (count >= 2)
            res++;
    }
    cout << res << endl;
    return 0;
}