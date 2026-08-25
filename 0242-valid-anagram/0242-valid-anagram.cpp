class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash(256,0);//intializing a hashtable of size 256
        int n=s.size();
        int m=t.size();
        if(n!=m)return false;
                for(int i=0;i<n;i++){
hash[s[i]]++;
hash[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(hash[i]!=0)return false;
        }
   return true; }
};