class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        vector<char> hash;

        for(int i=0;i<n;i++){
            hash.push_back(s[i]);
        }

        int sum=0;

        for(int i=0;i<n;i++){
            if(hash[i]=='I'){
                if(i+1<n && (hash[i+1]=='V'||hash[i+1]=='X')){
                    sum-=1;
                }
                else{
                    sum+=1;
                }
            }
            else if(hash[i]=='V'){
                sum+=5;
            }
            else if(hash[i]=='X'){
                if(i+1<n && (hash[i+1]=='L'||hash[i+1]=='C')){
                    sum-=10;
                }
                else{
                    sum+=10;
                }
            }
            else if(hash[i]=='L'){
                sum+=50;
            }
            else if(hash[i]=='C'){
                if(i+1<n && (hash[i+1]=='D'||hash[i+1]=='M')){
                    sum-=100;
                }
                else{
                    sum+=100;
                }
            }
            else if(hash[i]=='D'){
                sum+=500;
            }
            else if(hash[i]=='M'){
                sum+=1000;
            }
        }

        return sum;
    }
};