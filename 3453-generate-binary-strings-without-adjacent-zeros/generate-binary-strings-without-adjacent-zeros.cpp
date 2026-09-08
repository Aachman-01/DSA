class Solution {
public:

    void generate(int n,string curr,vector<string>& res){
        if(n==0){
            res.push_back(curr);
            return;
        }
        curr.push_back('1');
        generate(n-1,curr,res);
        curr.pop_back();
        if(curr.empty() || curr.back()!='0'){
            curr.push_back('0');
            generate(n-1,curr,res);
            curr.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        vector<string>res;
        string curr;
        generate(n,curr,res);
        return res;
    }
};