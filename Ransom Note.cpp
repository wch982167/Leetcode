class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r = ransomNote.size(),
            m = magazine.size();
        if(r>m) return false;
        unordered_map<char,int> mp;
        for(int i=0;i<m;i++){
            mp[magazine[i]]++;
        }
        for(int i=0;i<r;i++){
            if(mp[ransomNote[i]]==0) return false;
            mp[ransomNote[i]]--;
        }
        
        return true;
    }
};
