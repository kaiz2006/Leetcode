class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int i = 1;
        int j = 2;
        int odd = 0;
        int eve = 0;
        
        while(n--){
            odd+=i;
            i+=2;
            eve += j;
            j+=2;
        }
       

        return gcd(odd,eve);
    }
};