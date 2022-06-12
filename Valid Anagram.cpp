class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<char,int> mp;
        // int slen = s.size(),
        //     tlen = t.size();
        // if(slen!=tlen) return false;
        // for(int i=0;i<slen;i++){
        //     mp[s[i]]++;
        // }
        // for(int i=0;i<tlen;i++){
        //     if(!mp[t[i]]) return false;
        //     mp[t[i]]--;
        // }
        // return true;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
