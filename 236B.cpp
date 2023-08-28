#include <bits/stdc++.h>
using namespace std;

int mod = 1073741824;
void calculate_divisors(vector<int> &num)
{
    for (int i = 1; i < num.size(); ++i)
    {
        for (int j = i; j < num.size(); j += i)
        {
            num[j]++;
        }
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int len = (a * b * c) + 1;

    vector<int> num(len);
    calculate_divisors(num);
    int sum = 0;
    for (int i = 1; i <= a; ++i)
    {
        for (int j = 1; j <= b; ++j)
        {
            for (int k = 1; k <= c; ++k)
            {
                int n = i * j * k;
                sum = (sum + num[n]) % mod;
            }
        }
    }
    cout << sum << endl;
    return 0;
}