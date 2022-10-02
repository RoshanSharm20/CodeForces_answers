#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count_max = 0;
    string answer = "";
    for (int i = 0; i < s.size() - 1; ++i)
    {
        // string pat="";
        // pat=s[i]+s[i+1];
        int count = 0;
        for (int j = 0; j < s.size() - 1; ++j)
        {
            if (s[j] == s[i] && s[j + 1] == s[i + 1])
                count++;
        }
        if (count > count_max)
        {
            count_max = count;
            answer = s[i];
            answer += s[i + 1];
        }
    }
    cout << answer << endl;
}