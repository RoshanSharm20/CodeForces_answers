#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, n1, n2;
    set<int> s;
    cin >> n;
    cin >> n1;
    for (int i = 0; i < n1; ++i)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> n2;
    for (int i = 0; i < n2; ++i)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
}