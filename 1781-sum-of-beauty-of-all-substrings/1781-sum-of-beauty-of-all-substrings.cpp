class Solution {
public:
    int beautySum(string s) {
        int ans=0;
      int n =s.size();
      for(int i=0;i<n;i++){
        vector<int> freq(26,0);
        for(int j=i;j<n;j++){
freq[s[j]-'a']++;
int maxx=INT_MIN;
int minn=INT_MAX;
for(int k=0;k<26;k++){
    if(freq[k]>0){
    if(freq[k]>maxx)maxx=freq[k];
    if(freq[k]<minn)minn=freq[k];}
}
        ans+=maxx-minn;}
      }  
   return ans; }
};