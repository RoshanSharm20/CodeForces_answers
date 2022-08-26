#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    if (arr[k - 1] == 0)
    {
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] > 0)
                count++;
        }
        cout << count << endl;
    }
    else
    {
        int x = arr[k - 1];
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] >= x)
                count++;
        }
        cout << count << endl;
    }
}