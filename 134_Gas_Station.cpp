class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;
        int remaininggas = 0;
        int ans = 0;
        for(int i=0; i<gas.size(); i++){
            total += (gas[i] - cost[i]);
            remaininggas += (gas[i] - cost[i]);
            if(remaininggas<0){
                ans = i+1;
                remaininggas = 0;
            } 
        }
        if(total>=0){
            return ans;
        }
        return -1;
    }
};