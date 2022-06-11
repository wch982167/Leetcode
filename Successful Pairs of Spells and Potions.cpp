class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size(),
            m = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> v;
        for(int i=0;i<n;i++){
            long long num = success/spells[i] + (success % spells[i]!=0);
            int l=0, r=m-1;
            while(l<=r){
                int mid = (l+r)/2;
                if(potions[mid]<num){
                    l=mid+1;                    
                }else{
                    r=mid-1;                    
                }
            }
            v.push_back(m-1-r);
        }
        return v;
        
    }
};
