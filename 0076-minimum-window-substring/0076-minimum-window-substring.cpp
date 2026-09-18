class Solution { 
public: 
    string minWindow(string s,string t) { 
        int sind=-1; 
        int minlen=1000000000; 
        int l=0; 
        int r=0; 
        int cnt=0; 
        vector<int> hash(256,0); 
        
        int n=s.size(); 
        int m=t.size(); 
        
        for(int i=0;i<m;i++){ 
            hash[t[i]]++; 
        }   
        
        while(r<n){ 
            if(hash[s[r]]>0){ 
                cnt++; 
            } 
            hash[s[r]]--;
            
            while(cnt==m){ 
                if(r-l+1<minlen){ 
                    minlen=r-l+1; 
                    sind=l; 
                } 
                
                if(hash[s[l]]>=0)cnt--;
                hash[s[l]]++;
                l++;
            } 
            
            r++;
        }  
        
        if(sind==-1)return "";
        return s.substr(sind,minlen); 
    } 
};