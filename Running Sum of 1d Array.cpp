class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // vector<int> ans;
        // int sum=0;
        // for(int i:nums){
        //     sum+=i;
        //     ans.push_back(sum);
        // }
        // return ans;
        
        for(int i=1; i<nums.size(); i++){        
            nums[i] +=nums[i-1];
        }
        return nums; 
    }
};
