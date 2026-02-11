class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalcost=0;
        int totalgas=0;
        for(int i =0;i<gas.size();i++){
            totalgas+=gas[i];
        }
        for(int i =0;i<cost.size();i++){
            totalcost+=cost[i];
        }
        if(totalcost>totalgas){
            return -1;
        }
        int currgas=0;
        int start=0;
        for(int i =0;i<gas.size();i++){
            currgas+=(gas[i]-cost[i]);
            if(currgas<0){
                start=i+1;
                currgas=0;
            }
        }
        return start;
    }
};