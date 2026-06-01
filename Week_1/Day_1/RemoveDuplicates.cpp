class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = n - 1; i > 0; i--) {
            if (nums[i] == nums[i - 1]) {
                nums.erase(nums.begin() + i);
            }
        }
        return nums.size();
    }
};
