class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size(),0);
        int greatest = -1;

        for(int i=arr.size()-1; i >= 0; i--){
            ans[i] = greatest;
            greatest = max(greatest, arr[i]);
        }

        return ans;
    }
};