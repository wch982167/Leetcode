class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int> ans;
        // map<int, int> mp;
        // int var;
        // for(int i=0;i<numbers.size();i++){
        //     var = target-numbers[i];
        //     if(mp.find(numbers[i])!=mp.end()){
        //         ans.push_back(i+1);
        //         ans.push_back(mp[numbers[i]]+1);
        //         sort(ans.begin(), ans.end());
        //         return ans;
        //     }else{
        //         mp[var]=i;
        //     }
        // }
        // return {};
        int l=0, r=numbers.size()-1, var;
        while(l<r){
            var = numbers[l]+numbers[r];
            if(var>target){
                r--;
            }else if(var<target){
                l++;
            }else{
                break;
            }
        }
        return {l+1, r+1};
    }
};
