class Solution {
public:
    string rle(string &ppr){
        string nnr;
        int s=ppr.length();
        int t=0;

        while(t<s){
            int count=1;

            while(t+1<s && ppr[t]==ppr[t+1]){
                count=count+1;
                t++;
            }

            nnr+=to_string(count);
            nnr+=ppr[t];
            t++;
        }

        return nnr;
    }

    string countAndSay(int n) {
        string ppr="1";

        for(int i=1;i<n;i++){
            ppr=rle(ppr);
        }

        return ppr;
    }
};