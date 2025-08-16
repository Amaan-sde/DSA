class Solution {
public:
    int maximum69Number (int num) {
       
     int divisor = 1000;
        while (divisor > 0) {
            int digit = (num / divisor) % 10;
            if (digit == 6) {
                return num + 3 * divisor; // change 6 -> 9
            }
            divisor /= 10;
        }
        return num; 
    }
};