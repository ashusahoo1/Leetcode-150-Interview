//58. Length of Last Word


class Solution {
public:
    int lengthOfLastWord(string s) {
       int i=s.size()-1;
       int ans=0;
      while(i>=0 && s[i]==' ')  {
        i--;
      }  
      while(i>=0 && s[i]!=' '){
        i--;
        ans++;
      }  
      return ans; 
    }
    
};
