class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());

        string result;
        int n=s.size();
        int i=0;

        while(i<n) {
            while(i<n && s[i]==' ') {
                i++;
            }

            if(i>=n) {
                break;
            }

            int j=i;

            while(j<n && s[j]!=' ') {
                j++;
            }

            reverse(s.begin()+i,s.begin()+j);

            if(!result.empty()) {
                result+=" ";
            }

            result+=s.substr(i,j-i);

            i=j+1;
        }

        return result;
    }
};