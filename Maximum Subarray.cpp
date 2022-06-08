class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0, maxSum=INT_MIN; 
        for(int i:nums){
            currSum = max(i,i+currSum);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};
