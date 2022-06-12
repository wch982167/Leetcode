class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> mp; // frequency map
        int st=0, end=0, curSum=0, maxSum=INT_MIN;
        while(end<nums.size()){
            mp[nums[end]]++;
            while(mp[nums[end]]>1){
                curSum-=nums[st];
                mp[nums[st]]--;
                st++;
            }
            curSum+=nums[end];
            end++;
            maxSum = max(curSum, maxSum);
        }
        return maxSum;
    }
};
