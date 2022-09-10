#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    set<char> st;
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i)
    {
        s[i] = tolower(s[i]);
        st.insert(s[i]);
    }
    if (st.size() == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}