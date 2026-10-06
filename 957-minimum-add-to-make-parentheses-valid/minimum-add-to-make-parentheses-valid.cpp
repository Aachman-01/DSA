class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>stk;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                stk.push(s[i]);
            }
            else if(s[i]==')' && !stk.empty()){
                stk.pop();
            }
            else{
                count++;
            }
        }
        int parenthesis=count+stk.size();
        return parenthesis;
    }
};