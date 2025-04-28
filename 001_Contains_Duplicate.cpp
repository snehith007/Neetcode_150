#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
    }
};

int main() {
    Solution sol;
    
    // Example 1
    vector<int> nums = {1, 2, 3, 4};
    
    if (sol.hasDuplicate(nums)) {
        cout << "Duplicates found!" << endl;
    } else {
        cout << "No duplicates!" << endl;
    }

    // Example 2
    vector<int> nums2 = {1, 2, 3, 2};

    if (sol.hasDuplicate(nums2)) {
        cout << "Duplicates found!" << endl;
    } else {
        cout << "No duplicates!" << endl;
    }

    return 0;
}
