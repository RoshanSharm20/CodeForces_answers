#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, n;
    cin >> num >> n;
    while (n > 0)
    {
        if ((num % 10) != 0)
            num -= 1;
        else
            num /= 10;
        n--;
    }
    cout << num << endl;
}