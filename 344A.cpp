#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int k = 1;
    string store = "";
    for (int i = 0; i < n; ++i)
    {
        string x;
        cin >> x;
        if (k == 1)
        {
            store = x;
            k++;
        }
        else
        {
            if (store != x)
            {
                count++;
                store = x;
            }
        }
    }
    count++;
    cout << count << endl;
}