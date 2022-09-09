#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    string s = "I hate ";
    while (i < n)
    {
        if ((i % 2) == 0)
            s = s + "that I hate ";
        else
            s = s + "that I love ";
        i++;
    }
    s = s + "it";
    cout << s << endl;
}