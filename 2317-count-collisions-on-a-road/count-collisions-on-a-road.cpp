class Solution {
public:
    int countCollisions(string directions) {
        int n=directions.size();
        int i=0,j=n-1;
        while(i<n && directions[i]=='L'){
            i++;
        }
        while(j>=0 && directions[j]=='R'){
            j-=1;
        }
        int count=0;
        for(int k=i;k<j+1;k++){
            if(directions[k]!='S'){
                count+=1;
            }
        }
        return count;
    }
};