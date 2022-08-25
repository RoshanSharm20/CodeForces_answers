#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        str[i] = s;
    }
    for (auto &it : str)
    {
        if (it.length() <= 10)
            cout << it << endl;
        else
        {
            cout << it[0] << it.length() - 2 << it[it.length() - 1] << endl;
        }
    }
    return 0;
}