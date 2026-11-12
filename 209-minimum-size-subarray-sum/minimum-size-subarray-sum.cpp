class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0,minlength=INT_MAX,sum=0;
        while(r<n){
            sum+=nums[r];
            while(sum>=target){
                minlength=min(minlength,r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        if(minlength==INT_MAX) return 0;
        return minlength;
    }
};