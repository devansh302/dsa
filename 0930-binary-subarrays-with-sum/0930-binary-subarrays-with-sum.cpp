class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return func(nums,goal)-func(nums,goal-1);
    }
    int func(vector<int>& nums,int goal){
         int cnt=0;
        if(goal<0)return 0;
      //using sliding window and two pointer approach and function subtracting like ap sum;
      int sum=0;
      int l=0;
      int r=0;
      int n=nums.size();
      while(r<n){
        sum+=nums[r];
        while(sum>goal){
            sum=sum-nums[l];
            l++;
        }
      cnt=cnt+r-l+1;
      r++;
      }  
   return cnt; }
};