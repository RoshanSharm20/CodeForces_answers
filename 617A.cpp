#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int k = 5;
    while (n > 0 && k > 0)
    {
        while ((n - k) >= 0)
        {
            count++;
            n = n - k;
        }
        k--;
    }
    cout << count << endl;
}