class Solution {
public:
    string digitSum(string s, int k) {
        int n=s.size();
        while(s.size() > k){
            string sb="";
            for(int i=0;i<s.size();i+=k){
                int sum=0;
                for(int j=i;j<i+k && j<s.size();j++){
                    sum+=s[j]-'0';
                }
                sb+=to_string(sum);
            }
            s=sb;
        }
        return s;
    }
};