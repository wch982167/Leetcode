class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int n = password.size();
        bool upper = false,
             lower = false,
             digit = false,
             special = false;
        // string s = "!@#$%^&*()-+"; // No need to check -> see the Constraints!
        if(n<8) return false;
        for(int i=0;i<n;i++){
            if(i<n-1 && password[i]==password[i+1]){
                return false;
            }else if(isupper(password[i])){
                upper = true;
            }else if(islower(password[i])){
                lower = true;
            }else if(isdigit(password[i])){
                digit = true;
            }else{
                special = true;
            }
            
        }
        if(upper && lower && digit && special) return true;
        else return false;
    }
};
