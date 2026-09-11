class Solution {
public:
    int helper(char a){
        switch(a){
            case 'I':
                return 1;
                
            case 'V':
                return 5;
                
            case 'X':
                return 10;
                
            case 'L':
                return 50;
                
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int c=0;
        for(int i=0;i<s.length();i++){
            if(i+1<s.length() &&helper(s[i])<helper(s[i+1])){
                c-=helper(s[i]);
            }
            else{
                c+=helper(s[i]);
            }
        }
        return c;
    }


};