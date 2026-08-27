class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<int> hash(26,0);
        for(int i=0;i<m;i++){
            hash[t[i]-'a']++;
            if(i<n)hash[s[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(hash[i]==1)return char(i+97);
        }
        
    return 'p';}
};