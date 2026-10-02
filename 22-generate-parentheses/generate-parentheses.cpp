class Solution {

private:
    void genP(int openp,int closep,string s,int n,vector<string> &res){
        if(openp==closep && openp+closep == n * 2){
            res.push_back(s);
            return;
        }

        if(openp<n){
            genP(openp+1,closep,s+"(",n,res);
        }

        if(closep<openp){
            genP(openp,closep+1,s+")",n,res);
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        genP(0,0,"",n,res);
        return res;
    }
};