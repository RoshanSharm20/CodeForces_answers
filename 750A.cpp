#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int rem = 240 - t;
    int i = 1;
    int count = 0;
    while ((5 * i <= rem) && (count < n))
    {
        count++;
        rem -= (5 * i);
        i++;
    }
    cout << count << endl;
}