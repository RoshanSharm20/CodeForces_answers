#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 4; i < n - 4; ++i)
    {
        int num1 = i;
        int num2 = n - i;
        bool check1 = false, check2 = false;
        for (int j = 2; j <= (num1 / 2); ++j)
        {
            if ((num1 % j) == 0)
            {
                check1 = true;
                break;
            }
        }
        for (int j = 2; j <= (num2 / 2); ++j)
        {
            if ((num2 % j) == 0)
            {
                check2 = true;
                break;
            }
        }
        if (check1 && check2)
        {
            cout << num1 << " " << num2 << endl;
            break;
        }
    }
}