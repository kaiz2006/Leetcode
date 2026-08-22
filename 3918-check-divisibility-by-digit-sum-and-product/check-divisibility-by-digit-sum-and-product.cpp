class Solution {
public:
    int getSum(int n){
        int temp =0;
        while(n>0){
            int x = n%10;
            temp+=x;
            n/=10;
        }
        return temp;
    }

    int getProd(int n){
        int temp = 1 ;
        while(n>0){
            int x = n%10;
            temp*=x;
            n/=10;
        }
        return temp;
    }

    bool checkDivisibility(int n) {
        int temp = getProd(n)+getSum(n);
        if(n%temp ==0){
            return true;
        }
        else{
            return false;
        }
    }
};