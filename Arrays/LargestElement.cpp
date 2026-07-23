#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxi = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
            }
        }

        return maxi;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {3, 8, 2, 10, 5};

    cout << "Largest Element: " << obj.largestElement(nums) << endl;

    return 0;
}