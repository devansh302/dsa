class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        //w3e have to pick the maximum lwength subarray with 2 type3 opf fruits in the particulzr subarray 
        //for optimal approach solution we wull yuse sliding window and two pointer approach we will start from left and iterate through pushing each eloement inh the map al;ong with its rfequency and in sliding window approach we alsways trim down from the left side of the subarra7y taken and iterate forward in the map and keeop comparing the maxlength of the found 
    int left=0;
    int right=0;
    int maxlen=0;
    unordered_map<int,int> mpp;//to cout the frequency and number
int n=fruits.size();
while(right<n){
  mpp[fruits[right]]++;  

while(mpp.size()>2){
    mpp[fruits[left]]--;
    if(mpp[fruits[left]]==0)mpp.erase(fruits[left]);
    left++;
}
maxlen=max(right-left+1,maxlen);
   right++; }
  return maxlen;  }
};