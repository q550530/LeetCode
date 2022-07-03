class Solution {
public:
    bool isValid(string s) {
        vector<char> token;
        for(int i = 0;i<s.size();++i){
            if(token.empty())
                token.push_back(s[i]);
            else if(token.back()=='{'&&s[i]=='}'||token.back()=='['&&s[i]==']'||token.back()=='('&&s[i]==')')

                token.pop_back();
            else 
                token.push_back(s[i]);
                        
        }
       return token.empty();
      
         
    }
};