#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int width = 0;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        int n1;
        cin >> n1;
        if (n1 > h)
            width += 2;
        else
            width++;
    }
    cout << width << endl;
}