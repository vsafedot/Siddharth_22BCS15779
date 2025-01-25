class Solution {
    public:
        bool isPalindrome(string s) {
            string str;
             for(int i=0;i<s.size();i++){
                 if(isalpha(s[i]) || isdigit(s[i])){
                    s[i]=tolower(s[i]);
                    str.push_back(s[i]);
                }  
    
            }         
    
            int j=0;
            int k=str.size()-1;
            while(j<=k){
               if(str[j]!=str[k]) return false;
               else {
                j++;
                k--;
               }
            }
           
           return true;
        }
    };