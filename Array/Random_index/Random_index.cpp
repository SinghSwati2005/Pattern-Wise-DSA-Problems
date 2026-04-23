#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> nums;
public:
    Solution(vector<int>& arr) {
        nums = arr;
        srand(time(NULL)); // seed random generator
    }
    
    int pick(int target) {
        int count = 0;
        int chosen_index = -1;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                count++;
                // probability 1/count to choose this index
                if (rand() % count == 0) {
                    chosen_index = i;
                }
            }
        }
        return chosen_index;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    Solution sol(arr);
    
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    
    while (q--) {
        int target;
        cout << "Enter target: ";
        cin >> target;
        cout << "Random index for " << target << " = " << sol.pick(target) << endl;
    }
    
    return 0;
}


/* ⚡ Why Reservoir Sampling?
Imagine you don’t want to pre‑store all indices of the target (that would use extra space).
Instead, you want to scan the array once and randomly decide whether to keep the current index as your “chosen one.”

Reservoir Sampling ensures:

Each valid index has equal probability of being chosen.

Works in O(n) time, O(1) extra space.

🧩 Reservoir Sampling Logic
Initialize count = 0 and chosen_index = -1.

Iterate through nums:

If nums[i] == target:

Increment count.

With probability 1/count, set chosen_index = i.

After the loop, return chosen_index.

Why does this work?

The first occurrence has probability 1 of being chosen initially.

Each new occurrence has a chance to replace the old one.

At the end, each occurrence has equal probability 
1
/
𝑘
, where 
𝑘
 = number of times target appears. */