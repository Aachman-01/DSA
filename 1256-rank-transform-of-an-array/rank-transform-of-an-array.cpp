class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>copy=arr;
        sort(copy.begin(),copy.end());
        unordered_map<int,int>mp;
        int r=1;
        for(int i:copy){
            if(!mp.count(i)){
                mp[i]=r++;
            }
        }
        for(int &i:arr){
            i=mp[i];
        }
        return arr;
    }
};