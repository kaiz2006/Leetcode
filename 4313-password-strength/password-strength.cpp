class Solution {
public:
    int passwordStrength(string password) {
        int ans = 0;
        set<char> seen;

        for(int i =0;i<password.size();i++){
            if(password[i] >= 'a' && password[i] <= 'z'){
                if(seen.find(password[i]) != seen.end()){
                    continue;
                }else{
                    ans+=1;
                    seen.insert(password[i]);
                }
            }
            if(password[i] >= 'A' && password[i] <= 'Z'){
                if(seen.find(password[i]) != seen.end()){
                    continue;
                }else{
                    ans+=2;
                    seen.insert(password[i]);
                }
            }
            if(password[i] >= '0' && password[i] <= '9'){
                if(seen.find(password[i]) != seen.end()){
                    continue;
                }else{
                    ans+=3;
                    seen.insert(password[i]);
                }
            }
            if(password[i] == '!' ||password[i] == '@' ||password[i] == '#' ||password[i] == '$' ){
                if(seen.find(password[i]) != seen.end()){
                    continue;
                }else{
                    ans+=5;
                    seen.insert(password[i]);
                }
            }


        }
        return ans;
    }
};