class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int n = nums.size();
        int mini = n+1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(i<n && sum>=target){
                mini = min(mini, i-l+1);
                sum -= nums[l];
                l++;
            }
        }
        return mini == n+1 ? 0 : mini;
    }
};