class Solution {
public:
    int removePalindromeSub(string s) {
        // TC: O(logN) SC: O(1)
        int l=0, r=s.size()-1;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }else{
                return 2;
            }
        }
        return 1;
        
        // if( equal(s.begin(), s.begin()+s.size()/2, s.rbegin()))
        //     return 1;
        // return 2;
    }
};
