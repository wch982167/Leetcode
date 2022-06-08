class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int var;
        for(int i=0; i<nums.size(); i++){
            var = target-nums[i];
            if(m.find(nums[i])!=m.end()){
                return {i,m[nums[i]]};
            }else{
                m[var]=i;
            }
        }  
        return {};
    }
};
