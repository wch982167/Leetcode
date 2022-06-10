class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int checkrow[10][10]={0}, checkcol[10][10]={0}, checkbox[10][10]={0};
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]=='.') continue;
                int num = board[r][c]-'0';
                int box = (r/3)*3+(c/3);
                if(checkrow[r][num] || checkcol[c][num] || checkbox[box][num]) return false;
                checkrow[r][num]=checkcol[c][num]=checkbox[box][num]=1;
            }
        }
        return true;
    }
};
