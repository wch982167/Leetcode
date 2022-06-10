class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // binary search
        int low=0, high=matrix.size()*matrix[0].size()-1;
        while(low<=high){
            int mid = (low+high)/2,
                r = mid/matrix[0].size(),
                c = mid%matrix[0].size();
            if(matrix[r][c]==target) return true;
            else if(matrix[r][c]<target) low=mid+1;
            else high=mid-1;
            
        }
        return false;
        
        
        // int m = matrix.size(),
        //     n = matrix[0].size(),
        //     r = 0, c = n-1; // (r,c) is root
        // while(r<m && c>=0){
        //     int cur = matrix[r][c];
        //     if(target==cur) return true;
        //     if(target<cur) c--;
        //     else r++;
        // }
        // return false;
        // TC:O(m+n)
    }
};
