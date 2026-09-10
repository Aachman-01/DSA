class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int a=0,b=0;
        vector<int>ans=nums;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(ans[i]!=nums[i]){
                a=i;break;
            }
        }
        for(int i=n-1;i>0;i--){
            if(ans[i]!=nums[i]){
                b=i;break;
            }
        }
        if(a==b){
            return 0;
        }else{
            count=b-a+1;
        }
        return count;
    }
};