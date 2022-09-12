#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int arr[] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; ++i)
    {
        while (n != 0 && ((n - arr[i]) >= 0))
        {
            count++;
            n -= arr[i];
        }
    }
    cout << count << endl;
}