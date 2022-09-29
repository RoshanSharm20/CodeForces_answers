#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxval = 0;
    maxval = max(maxval, a * b * c);
    maxval = max(maxval, a + b + c);
    maxval = max(maxval, (a + b) * c);
    maxval = max(maxval, a + (b * c));
    maxval = max(maxval, (a * b) + c);
    maxval = max(maxval, a * (b + c));
    cout << maxval << endl;
}