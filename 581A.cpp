#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << min(n1, n2) << " " << ((abs(n1 - n2) / 2)) << endl;
}