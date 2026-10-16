class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0 , j = s.size()-1;
        while(i<j&& j >=0){
            swap(s[i], s[j]);
            i++;
            j--;
        }

    }
};