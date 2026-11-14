class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        const long long mod = 1e9 + 7;
        priority_queue<long long,vector<long long>,greater<long long>>pq(nums.begin(),nums.end());
        while(k--){
            long long x=pq.top();
            pq.pop();
            pq.push(x+1);
        }
        long long prod=1;
        while(!pq.empty()){
            prod=(prod*pq.top())%mod;
            pq.pop();
        }
        return prod;
    }
};