#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1000;; ++i)
    {
        int n1 = i;
        set<int> s;
        while (n1 > 0)
        {
            int rem = n1 % 10;
            s.insert(rem);
            n1 = n1 / 10;
        }
        if (s.size() == 4 && i > n)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}