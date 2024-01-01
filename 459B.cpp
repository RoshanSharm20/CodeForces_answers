#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    long long int max_diff = (long long)nums[n - 1] - (long long)nums[0];
    long long int count1 = (long long)count(nums.begin(), nums.end(), nums[0]);
    long long int count2 = (long long)count(nums.begin(), nums.end(), nums[n - 1]);

    if (max_diff > 0)
        cout << max_diff << " " << count1 * count2 << endl;
    else
        cout << max_diff << " " << (count1 * (count1 - 1)) / (long long)2 << endl;
    return 0;
}