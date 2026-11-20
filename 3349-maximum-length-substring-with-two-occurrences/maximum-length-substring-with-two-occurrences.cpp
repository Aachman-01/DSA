class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int maxlength=0;
        int r=0,l=0;
        vector<int>freq(26,0);
        while(r<n){
            freq[s[r]-'a']++;
            while(freq[s[r]-'a']>2){
                freq[s[l]-'a']--;
                l++;
            }
            maxlength=max(maxlength,r-l+1);
            r++;
        }
        return maxlength;
    }
};