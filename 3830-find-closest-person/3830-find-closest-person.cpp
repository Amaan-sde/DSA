class Solution {
public:
    int findClosest(int x, int y, int z) {
        int res = abs(x-z) , ans = abs( y-z);
        if(res<ans)
            return 1;
        
        else if(ans<res)
            return 2;
        
        return 0;
    }
};