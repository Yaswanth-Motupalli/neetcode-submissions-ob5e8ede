class Solution {
public:
    int lengthOfLastWord(string s) {
        int a = s.length()-1;
        while(a>=0 && s[a] == ' ')a--;

        for(int i=a; i>=0; i--){
            if(s[i] == ' ')return a-i;
        }

        return a+1;
    }
};