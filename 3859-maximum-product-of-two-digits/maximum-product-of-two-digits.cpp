class Solution {
public:
    int maxProduct(int n) {
        int x = 0,y=0;
        while(n>0){
            int z = n%10;
            if(z>x){
                y=x;
                x=z;
            }else if(z>y){
                y=z;
            }
            n /= 10;

        }
        return x*y;
    }
};