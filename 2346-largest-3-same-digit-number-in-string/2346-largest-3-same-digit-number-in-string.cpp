class Solution {
public:
    string largestGoodInteger(string num) {
        char ans =' ';
        for(int i=2;i<num.size();i++){
            if(num[i] == num[i-1] && num[i] == num[i-2]){
                ans = max(num[i] , ans);
            }
        }
        if(ans ==' '){
            return "";
        }
        return string(3, ans);
        
    }
};