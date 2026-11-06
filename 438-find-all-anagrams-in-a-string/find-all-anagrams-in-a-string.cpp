class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size(),m=p.size();
        vector<int>ans;
        vector<int>p_freq(26,0);
        vector<int>s_freq(26,0);
        if(n<m) return ans;
        for(int i=0;i<m;i++){
            p_freq[p[i]-'a']++;
            s_freq[s[i]-'a']++;
        }
        if(p_freq==s_freq){
            ans.push_back(0);
        }
        for(int i=m;i<n;i++){
            s_freq[s[i]-'a']++;
            s_freq[s[i-m]-'a']--;
            if(p_freq==s_freq){
                ans.push_back(i-m+1);
            }
        }
        return ans;
    }
};