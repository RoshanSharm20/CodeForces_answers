#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> v;
    for (int i = 0; i < t; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < t; ++i)
    {
        if (v[i] == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            bool check = true;
            int count = 0;
            while (v[i] != 1)
            {
                if (v[i] % 6 == 2)
                {
                    check = false;
                    break;
                }
                else if (v[i] % 6 == 0)
                {
                    count++;
                    v[i] /= 6;
                }
                else
                {
                    count++;
                    v[i] *= 2;
                }
            }
            if (check)
                cout << count << endl;
            else
                cout << "-1" << endl;
        }
    }
}