class Solution {
public:
    using ll = long long;
    bool judgeSquareSum(int c) {
        ll a  = 0;
        ll b = (ll)sqrt(c);
        while(a<=b){
            ll sum = (a*a) + (b*b);
            if(sum == c){
                return true;
            }else if(sum>c){
                b--;
            }else{
                a++;
            }
        }

        return false;
    }
};