class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        int curr = 0;
        bool stop = false;

        while(!stop){
            if(strs[0].length() <= curr){
                stop = true;
                break;
            }
            char c = strs[0][curr];
            for(string s: strs){
                if(s.length() <= curr || s[curr] != c){
                    stop = true;
                    break;
                }
            }

            if(!stop)ans += c;
            curr++;
        }

        return ans;
    }
};