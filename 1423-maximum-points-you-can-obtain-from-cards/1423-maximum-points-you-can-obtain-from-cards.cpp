class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
        int maxp=0;

        int n=cardPoints.size();

        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
        }

        maxp=lsum;

        int right=n-1;

        for(int i=k-1;i>=0;i--){
            lsum=lsum-cardPoints[i];
            rsum=rsum+cardPoints[right];
            right--;

            maxp=max(maxp,lsum+rsum);
        }

        return maxp;
    }
};