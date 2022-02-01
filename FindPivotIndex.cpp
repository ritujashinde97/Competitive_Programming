class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        for (int i = 1; i < len; i++) {
            nums[i] += nums[i - 1];
        }
        for (int i = 0; i < len; i++) {
            int left = i - 1 >= 0 ? nums[i - 1] : 0;
            int right = nums.back() - nums[i];
            if (left == right) {
                return i;
            }
        }
        return -1;
    }
};
