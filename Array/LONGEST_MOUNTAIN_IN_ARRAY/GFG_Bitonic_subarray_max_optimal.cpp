#include <iostream>
#include <vector>
using namespace std;

int longest_Mountain(vector<int> &arr)
{
    int n = arr.size();
    int longest = 0;
    int i = 0;
    while (i < n)
    {
        int up = 0, down = 0;
        while (i + 1 < n && arr[i + 1] > arr[i])
        {
            up++;
            i++;
        }

        while (i + 1 < n && arr[i + 1] < arr[i])
        {
            down++;
            i++;
        }

        if (up > 0 || down > 0)
        {
            longest = max(longest, up + down + 1);
        }
        else
        {
            i++;
        }
    }
    return longest;
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

    cout << longest_Mountain(nums) << " ";
    return 0;
}

// O(n)
// O(1)

// if u give && in between up and down this solves the mountainarray also and if || is given this solves bitonic array.