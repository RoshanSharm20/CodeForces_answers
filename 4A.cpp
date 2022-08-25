#include "iostream"
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 2)
    {
        cout << "NO" << endl;
        exit(0);
    }
    if ((n % 2) == 1)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
    }
}