class Solution {
public:
    int countSeniors(vector<string>& details) {
        int res = 0;

        for(string detail: details){
            string age_str = detail.substr(11,2);

            int age = stoi(age_str);

            if(age > 60)res++;
        }

        return res;
    }
};