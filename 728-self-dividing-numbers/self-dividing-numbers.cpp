class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left;i<=right;i++){
            vector<int> temp;
            int y =i;
            bool zero_check = true;
            while(i>0){
                int x = i%10;
                if(x==0){
                    zero_check = false;
                    break;
                }else{
                    temp.push_back(x);
                }
                i=i/10;
            }
            i=y;
            if(!zero_check) continue;
            
            bool flag = true;
            for(int j = 0;j<temp.size();j++){
                if(i%temp[j] != 0 ){
                    flag = false;
                    break;
                }else{
                    continue;
                }
            }
            if(flag){
                ans.push_back(y);
            }
        }
        return ans;
    }
    
};