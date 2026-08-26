class Solution {
public:
    string shortestBeautifulSubstring(string s,int k){
        int n=s.size();
        string res="";
        
        for(int i=0;i<n;i++){
            int count=0;
            
            for(int j=i;j<n;j++){
                if(s[j]=='1'){
                    count++;
                }
                
                if(count==k){
                    string str=s.substr(i,j-i+1);
                    
                    if(res=="" || str.size()<res.size() || 
                       (str.size()==res.size() && str<res)){
                        res=str;
                    }
                    
                    break;
                }
            }
        }
        
        return res;
    }
};