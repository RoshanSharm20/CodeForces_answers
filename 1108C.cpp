#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char garland[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> garland[i];
    }

    // vector<char> lamps;
    // lamps.push_back('R');
    // lamps.push_back('G');
    // lamps.push_back('B');
    string lamps = "BGR";

    int min_val = INT_MAX;
    string ans = "";
    do
    {
        // cout << lamps << endl;
        int curr_val = 0;
        for (int i = 0; i < n; i = i + 3)
        {
            if (i < n && garland[i] != lamps[0])
                curr_val++;
            if ((i + 1) < n && garland[i + 1] != lamps[1])
                curr_val++;
            if ((i + 2) < n && garland[i + 2] != lamps[2])
                curr_val++;
        }

        if (curr_val < min_val)
        {
            min_val = curr_val;
            string str = "";
            for (int i = 0; i < n; i = i + 3)
            {
                if (i < n)
                    str += lamps[0];
                if ((i + 1) < n)
                    str += lamps[1];
                if ((i + 2) < n)
                    str += lamps[2];
            }
            ans = str;
        }
    } while (next_permutation(lamps.begin(), lamps.end()));

    cout << min_val << "\n"
         << ans << endl;
    return 0;
}