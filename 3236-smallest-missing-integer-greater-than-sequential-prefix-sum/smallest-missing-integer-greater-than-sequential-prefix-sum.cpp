class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(i==n-1 || nums[i]+1!=nums[i+1]) break;
        }
        for(int j = sum;;j++){
            bool flag = false;
            for(int i=0;i<n;i++){
                if(j == nums[i]){
                    flag = true;
                    break;
                }
            }
            if(!flag) return j;
        }
        return 0;
    }
};