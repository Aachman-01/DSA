class Solution {
public:
    bool f(int idx, int target, vector<int>& nums, vector<vector<int>>& dp) {
        if (target == 0) return true;
        if (idx < 0) return false;
        if (dp[idx][target] != -1) return dp[idx][target];

        bool notTake = f(idx-1, target, nums, dp);
        bool Take = false;
        if (nums[idx] <= target) Take = f(idx-1, target - nums[idx], nums, dp);

        return dp[idx][target] = Take || notTake;
    }

    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 2 != 0) return false;
        int target = sum / 2;
        vector<vector<int>> dp(nums.size(), vector<int>(target+1, -1));
        return f(nums.size()-1, target, nums, dp);
    }
};
