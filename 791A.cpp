#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int count = 0;
    while (n1 <= n2)
    {
        n1 = n1 * 3;
        n2 = n2 * 2;
        count++;
    }
    cout << count << endl;
}