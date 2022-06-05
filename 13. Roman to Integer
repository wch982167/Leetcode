class Solution {
public:
    map<char,int> m = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}         
    };
    
    int romanToInt(string s) {
        int sum=0,i=0;
        while(i<s.size()){
            # 原則上左到右是大到小, 若左比右小則相減
            if( (i+1)<s.size() && m[s[i+1]]>m[s[i]] ){
                sum += ( m[s[i+1]] - m[s[i]] );
                i+=2;
            }else{
                sum += m[s[i]];
                i++;
            }
        }
        return sum;
    }
};
