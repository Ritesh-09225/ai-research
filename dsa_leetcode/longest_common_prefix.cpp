class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int m = strs.size();
        if(m==0) return "";           //empty string
        if(m==1) return strs[0];      //single string

        for(int i=0;i<strs[0].size();i++)
        {
            char cc = strs[0][i];   // current character
            for(int j=1;j<m;j++)
            {
                if(i == strs[j].size() || cc != strs[j][i]) return ans;
            }
            ans += cc;
        }
        return ans;
    }
};