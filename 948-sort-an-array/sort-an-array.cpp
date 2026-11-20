class Solution {
public:
    void merge(vector<int>&nums,int st,int mid,int end){
        int n=nums.size();
        vector<int>temp;
        int i=st,j=mid+1;
        while(i<=mid && j<=end){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(nums[j]);
            j++;
        }
        for(int idx=0;idx<temp.size();idx++){
            nums[idx+st]=temp[idx];
        }
    }

    void mergeSort(vector<int>& nums,int left,int right){
        if(left<right){
            int mid=left+(right-left)/2;
            mergeSort(nums,left,mid);
            mergeSort(nums,mid+1,right);
            merge(nums,left,mid,right);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        //using merge sort
        int n=nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};