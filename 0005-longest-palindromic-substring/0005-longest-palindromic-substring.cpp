class Solution {
public:
    string longestPalindrome(string s) {
        //we will check for each element of the string as if it is the centre of the palindrome we will run across in boyh the directions and see whether it is forming a vvalid palindrome or  nopt if it is forming one we will store its length oin the count and return nthe maximum value of the count
string res="";
int n=s.size();
for(int i=0;i<n;i++){
    //if odd palindrome
    int st=i;
    int end=i;
    while(st>=0&&end<n&&s[st]==s[end]){
        st--;
        end++;
    }
    string temp=s.substr(st+1,end-st-1);
    if(temp.size()>res.size())res=temp;

    st=i;
    end=i+1;
    while(st>=0&&end<n&&s[st]==s[end]){
        st--;
        end++;
    }
    temp=s.substr(st+1,end-st-1);
    if(temp.size()>res.size())res=temp;
}
return res;

    }
};