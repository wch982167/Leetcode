class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX; //least so far
        int maxP = 0; //max profit
        for(int i:prices){
            lsf = min(lsf,i);
            maxP = max(maxP, i-lsf);
        }
        return maxP;
    }
};
