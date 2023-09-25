#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> numbers, vector<int> &permute)
{
    int min_val = INT_MAX, max_val = 0;
    for (int i = 0; i < numbers.size(); ++i)
    {
        int value = 0;
        for (int k = 0; k < permute.size(); ++k)
        {
            int index = permute[k];
            // cout << stoi(numbers[index]) << endl;
            int val = int(numbers[i][index]) - 48;
            value = value * 10 + val;
        }
        min_val = min(min_val, value);
        max_val = max(max_val, value);
    }
    return max_val - min_val;
}

int main()
{
    int n, k;
    cin >> n >> k;

    // storing the numbers in the form of strings for easier manipulations
    vector<string> numbers;
    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        numbers.push_back(str);
        // int x;
        // cin >> x;
        // cout << to_string(x) << endl;
        // numbers.push_back(to_string(x));
    }

    // generatin initial permutation
    vector<int> permute;
    for (int i = 0; i < k; ++i)
    {
        permute.push_back(i);
    }

    int min_ans = INT_MAX;
    do
    {
        min_ans = min(min_ans, solution(numbers, permute));
    } while (next_permutation(permute.begin(), permute.end()));

    cout << min_ans;
    return 0;
}