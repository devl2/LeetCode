class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string temp, res;
        res = strs[0];
        for(int i = 1; i < strs.size(); i++){
            temp = "";
            int j = 0;

            while(j < res.size() && j < strs[i].size() && res[j] == strs[i][j]){
                temp += res[j];
                j++;
            }

            res = temp;

            if(res == "") return "";
        }

        return res;
    }
};
