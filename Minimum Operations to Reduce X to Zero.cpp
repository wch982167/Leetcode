class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0, n=nums.size();
        
        for(int i:nums) sum+=i;
        if(sum<x) return -1;
        int target=sum-x, curr=0, maxlen=0, st=0;
        if(target==0) return n;
        for(int end=0;end<n;end++){
            curr+=nums[end];
            while(st<=end && curr>target){
                curr-=nums[st];
                st++;
            }
            if(curr==target){
                maxlen = max(maxlen, end-st+1);
            }
        }
        
        if(maxlen==0) return -1;
        else return n-maxlen;
    }
};
