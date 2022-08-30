#include <bits/stdc++.h>
using namespace std;
int main()
{
    int price, amount, want;
    cin >> price >> amount >> want;
    int sum = (price * (want * (want + 1) / 2));
    if (sum > amount)
        cout << sum - amount << endl;
    else
        cout << 0 << endl;
}