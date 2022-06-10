class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp; //stored next index
        int i=0,j=0,ans=0;
        while(j<s.size()){
            i = max(mp[s[j]],i);
            mp[s[j]]=j+1;            
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
