#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    while (n != 0)
    {
        int rem = n % 10;
        n = n / 10;
        ans.push_back(rem);
    }
    reverse(ans.begin(), ans.end());
    bool check = true;
    for (int i = ans.size() - 1; i >= 0;)
    {
        if ((ans[i] != 4) && (ans[i] != 1))
        {
            check = false;
            break;
        }
        else
        {
            if (ans[i] == 1)
                --i;
            else
            {
                if (ans[i - 1] == 1)
                    i = i - 2;
                else if (ans[i - 1] == 4)
                {
                    if (ans[i - 2] == 1)
                        i = i - 3;
                    else
                    {
                        check = false;
                        break;
                    }
                }
                else
                {
                    check = false;
                    break;
                }
            }
        }
    }
    if (check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}