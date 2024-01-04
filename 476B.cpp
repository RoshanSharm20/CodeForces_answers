#include <bits/stdc++.h>
using namespace std;
int factorial(int x)
{
    int ans = 1;
    while (x >= 1)
    {
        ans *= x;
        x--;
    }
    return ans;
}

int main()
{
    string sent, rec;
    cin >> sent >> rec;

    int spos = 0, sneg = 0, rpos = 0, rneg = 0;
    for (int i = 0; i < sent.size(); ++i)
    {
        if (sent[i] == '+')
            spos++;
        if (sent[i] == '-')
            sneg++;
        if (rec[i] == '+')
            rpos++;
        if (rec[i] == '-')
            rneg++;
    }

    if (rpos > spos || rneg > sneg)
        cout << (double)0 << endl;
    else
    {
        int pos_left = spos - rpos, neg_left = sneg - rneg;
        long double denominator = (double)pow(2, (pos_left + neg_left));
        // cout << "denominator : " << denominator << endl;
        if (pos_left == 0 || neg_left == 0)
        {
            cout << (long double)1 / (long double)denominator << endl;
            return 0;
        }
        // double pos, neg;
        // pos = factorial(pos_left + neg_left) / factorial(pos_left);
        // cout << "pos : " << pos << endl;
        // neg = factorial(pos_left + neg_left) / factorial(neg_left);
        // cout << "neg : " << neg << endl;
        double ans = (long double)pos_left * neg_left * (pos_left + neg_left) / (long double)denominator;
        cout << ans << endl;
    }
    return 0;
}