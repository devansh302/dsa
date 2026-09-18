class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        //the naive solutiuon will be to generate all the subarrays and then count them whichever has k distinct integers
        //cant simply apply 2 pointer approach and sliding window because we will be missing out on a lot of subarrays
        //using function deduction
return func(nums,k)-func(nums,k-1);
    }
    int func(vector<int>& nums,int k){
        if(k<0)return 0;
        int l=0;
        int r=0;
        int cnt=0;
    int n=nums.size();
    map<int,int> mpp;
    while(r<n){
mpp[nums[r]]++;
if(mpp.size()>k){
    while(mpp.size()>k){
        mpp[nums[l]]--;
        if(mpp[nums[l]]==0)mpp.erase(nums[l]);
        l++;
    }

}
   cnt=cnt+r-l+1; 
   r++;}
    return cnt;}
};