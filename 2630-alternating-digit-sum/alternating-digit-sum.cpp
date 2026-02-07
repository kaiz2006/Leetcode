class Solution {
public:
    int alternateDigitSum(int num) {
        vector<int> digits;
        int count =0;

        while(num > 0){
            digits.push_back(num % 10); 
            num/= 10;                 
        }

        reverse(digits.begin(), digits.end());
        for(int i =0;i<digits.size();i+=2){
            count+=digits[i];
        }
        for(int i =1;i<digits.size();i+=2){
            count-=digits[i];
        }
        return count;
        
    }
};