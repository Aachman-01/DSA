class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int i=0;
        int ans=-1;
        while(i<nums.size()){
            int n=nums[i];
            int sum=0;
            while(n>0){
                int d=n%10;
                sum+=d;
                n/=10;
            }
            if(sum==i){
                ans=i;
                break;
            }
            i++;
        }
        return ans;
    }
};