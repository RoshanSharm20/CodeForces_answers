#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int set = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            set = 1;
            break;
        }
    }
    if (set == 0)
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;
}