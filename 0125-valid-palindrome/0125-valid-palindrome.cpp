class Solution {
public:
    bool isPalindrome(string s) {
        string temp;

        for(int i=0;i<s.size();i++){
            if(int(s[i])>=97 && int(s[i])<=122){
                temp+=s[i];
            }
            else if(int(s[i])>=65 && int(s[i])<=90){
                temp+=char(int(s[i])+32);
            }
            else if(int(s[i])>=48 && int(s[i])<=57){
                temp+=s[i];
            }
        }

        s=temp;

        int r=s.size();
        int i=0;
        int j=r-1;

        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};