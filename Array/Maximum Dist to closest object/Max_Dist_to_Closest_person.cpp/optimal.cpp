#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int maxDistClosestPerson(vector<int> &seats)
{
    int n = seats.size();
    int prev = -1, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (seats[i] == 1)
        {
            if (prev == -1)
            {
                ans = max(ans, i);
            }
            else
            {
                ans = max(ans, (i - prev) / 2);
            }
            prev = i;
        }
    }

    ans = max(ans, n - 1 - prev);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << maxDistClosestPerson(nums) << " ";
    return 0;
}

// tc - o(n)
// sc = o(1) Track gaps between occupied seats