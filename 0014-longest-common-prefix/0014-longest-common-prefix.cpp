class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();

        int mini=strs[0].size();

        for(int i=1;i<n;i++){
            if(strs[i].size()<mini){
                mini=strs[i].size();
            }
        }

        string ans="";

        for(int i=0;i<mini;i++){
            char c=strs[0][i];
            int count=0;

            for(int j=0;j<n;j++){
                if(strs[j][i]==c){
                    count++;
                }
            }

            if(count==n){
                ans+=c;
            }
            else{
                break;
            }
        }

        return ans;
    }
};