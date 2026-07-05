class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string temp1;
        string temp2;
        
        for(auto &it:s){
            if(it != '#'){
                temp1.push_back(it);
            }else if(it == '#'){
                if(temp1.size()>0){
                    temp1.erase(temp1.size()-1,1);
                }else{
                    continue;
                }
            }
        }for(auto &it:t){
            if(it != '#'){
                temp2.push_back(it);
            }else if(it == '#'){
                if(temp2.size()>0){
                    temp2.erase(temp2.size()-1,1);
                }else{
                    continue;
                }
            }
        }


        return temp1 == temp2;

        
    }
};