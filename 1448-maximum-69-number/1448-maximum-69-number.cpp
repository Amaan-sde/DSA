class Solution {
public:
    int maximum69Number (int num) {
       
        int x=0;
        int y=-1;
        int res = num;
        while(res){
            int z = res%10;

            if(z==6)
            y=x;

            res/=10;
            x++;
        }
        if(y==-1) return num;

        return num + 3*pow(10,y);
    }
};