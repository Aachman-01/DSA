class Solution{
    public:
    vector<int>intersection(vector<int>&nums1,vector<int>&nums2)
    {
        unordered_set<int>st1(begin(nums1),end(nums1));
        vector<int>result;
        for(int &p:nums2)
        {
            if(st1.find(p)!=st1.end())
            {
                result.push_back(p);
                st1.erase(p);
            }
        }
        return result;
    }
};