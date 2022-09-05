#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        int n1, n2;
        cin >> n1 >> n2;
        if ((n2 - n1) >= 2)
            count++;
    }
    cout << count;
}