#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    for (int i = 0; i < t; ++i)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string str = "";
        char letter = 'a';
        for (int i = 0; i < b; ++i)
        {
            str += letter;
            letter++;
        }
        for (int i = 0; i < (a - b); ++i)
        {
            str += str[i];
        }
        for (int i = 0; i < (n - a); ++i)
        {
            str += str[i];
        }
        ans.push_back(str);
    }
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << endl;
    }
}
