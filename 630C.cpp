#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int count = 0, curr_count = 1;
    for (int i = 1; i <= n; ++i)
    {
        curr_count *= (long long int)2;
        count += curr_count;
    }

    cout << count << endl;
    return 0;
}