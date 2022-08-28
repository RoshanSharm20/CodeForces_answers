#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.size() == 1)
        cout << s;
    else
    {
        for (int i = 0; i < s.size() - 2; i = i + 2)
        {
            for (int j = i + 2; j < s.size(); j = j + 2)
            {
                if (s[i] > s[j])
                    swap(s[i], s[j]);
            }
        }
        cout << s << endl;
    }
}