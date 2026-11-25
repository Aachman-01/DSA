class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int a=-1,b=-1,c=-1;
        int total=0;
        int dmin=INT_MIN;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='a'){
                a=i;
            }else if(ch=='b'){
                b=i;
            }else{
                c=i;
            }
            dmin=min(a,min(b,c));
            if(a>-1 && b>-1 && c>-1){
                total+=(dmin+1);
            }
        }
        return total;
    }
};