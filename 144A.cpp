#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int minindex = 0;
    int maxindex = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x > v[maxindex])
            maxindex = i;
        if (x <= v[minindex])
            minindex = i;
    }
    if (maxindex < minindex)
        cout << (maxindex + (n - minindex - 1)) << endl;
    else
        cout << (maxindex + (n - minindex - 2)) << endl;
}