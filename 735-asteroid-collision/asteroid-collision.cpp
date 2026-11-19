class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>stk;
        for(int i:asteroids){
            if(i>0){
                stk.push(i);
            }else{
                while(!stk.empty() && -i>stk.top() && stk.top()>0){
                    stk.pop();
                }
                if(!stk.empty() && stk.top()==-i){
                    stk.pop();
                }
                else if(stk.empty() || stk.top()<0){
                    stk.push(i);
                }
            }
        }
        vector<int>ans;
        while(!stk.empty()){
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans; 
    }
};