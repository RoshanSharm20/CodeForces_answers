#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    // vector<string> ans;
    for (int i = 0; i < t; ++i)
    {
        string s;
        cin >> s;
        stack<char> st;
        int count = 0;
        for (int j = 0; j < s.size(); ++j)
        {
            if (st.empty())
                st.push(s[j]);
            else
            {
                if (st.top() != s[j])
                {
                    count++;
                    st.pop();
                }
                else
                    st.push(s[j]);
            }
        }
        if ((count % 2) != 0)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }
    // for (int i = 0; i < t; ++i)
    //     cout << ans[i] << endl;
}