class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        while(!s.empty()&& s.back()==' '){
            s.pop_back();
        }
        int n=s.length();
            for(int i=0;i<n;i++){
                if(s[i]==' '){
                    c=0;
                }
                else{
                    c++;
                }
            }
        return c;
    }
};