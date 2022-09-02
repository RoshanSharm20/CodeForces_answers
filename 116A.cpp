#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int res = 0;
    while (n > 0)
    {
        int n1, n2;
        cin >> n1 >> n2;
        res = res - n1 + n2;
        sum = max(sum, res);
        n--;
    }
    cout << sum << endl;
}