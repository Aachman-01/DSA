class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] > b[1];
        });
        int total_units=0;
        for(auto &box:boxTypes){
            if(truckSize==0) break;
            int boxes=box[0];
            int units=box[1];
            int take=min(truckSize,boxes);
            total_units+=take*units;
            truckSize-=take;
        }
        return total_units;
    }
};