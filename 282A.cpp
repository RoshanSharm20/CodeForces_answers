#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0;
    string str[n];
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        str[i] = s;
    }
    for (int i = 0; i < n; ++i)
    {
        if ((str[i] == "++X") || (str[i] == "X++"))
            x++;
        if ((str[i] == "--X") || (str[i] == "X--"))
            x--;
    }
    cout << x << endl;
}