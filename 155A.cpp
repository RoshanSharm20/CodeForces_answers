#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int mini = 0, maxi = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            mini = x;
            maxi = x;
        }
        else
        {
            if ((x > maxi) || (x < mini))
            {
                count++;
                maxi = max(x, maxi);
                mini = min(x, mini);
            }
        }
    }
    cout << count << endl;
}