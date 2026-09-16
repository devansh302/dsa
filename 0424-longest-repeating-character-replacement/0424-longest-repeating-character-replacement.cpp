class Solution {
public:
    int characterReplacement(string s, int k) {
        //we can solve this by sliding window and two pointer approach from left to right trimming down from left side of the array
        int l=0;
        int r=0;
        vector<int> hash(26,0);
        int maxf=0;
        int maxlen=0;
        int n=s.size();
        while(r<n){
            hash[s[r]-'A']++;
            maxf=max(maxf,hash[s[r]-'A']);
            while(r-l+1-maxf>k){
                hash[s[l]-'A']--;
                maxf=0;
                for(int i=0;i<26;i++){
                    maxf=max(maxf,hash[i]);
                }
                l++;
            }
if(r-l+1-maxf<=k){
    maxlen=max(maxlen,r-l+1);
}
    r++;    }
    return maxlen;}
};