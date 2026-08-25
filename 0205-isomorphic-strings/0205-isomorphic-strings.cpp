class Solution {
public:
    bool isIsomorphic(string s,string t) {
        vector<char> hash1(256,0);
        vector<char> hash2(256,0);

        int n=s.size();

        for(int i=0;i<n;i++) {
            if(hash1[s[i]]!=0 && hash1[s[i]]!=t[i]) {
                return false;
            }

            if(hash2[t[i]]!=0 && hash2[t[i]]!=s[i]) {
                return false;
            }

            hash1[s[i]]=t[i];
            hash2[t[i]]=s[i];
        }

        return true;
    }
};