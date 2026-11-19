class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long mass1=mass;
        for(int i:asteroids){
            if(mass1<i){
                return false;
            }
            mass1+=i;
        }
        return true;
    }
};