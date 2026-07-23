#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isSorted(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution obj;

    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 3, 2, 4, 5};

    cout << obj.isSorted(nums1) << endl; // 1 (true)
    cout << obj.isSorted(nums2) << endl; // 0 (false)

    return 0;
}