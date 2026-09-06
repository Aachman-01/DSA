class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        vector<int>count;
        for(auto &it:mp){
            count.push_back(it.second);
        }
        sort(count.begin(),count.end());
        for(int i=1;i<count.size();i++){
            if(count[i]==count[i-1])return false;
        }
        return true;
    }
};