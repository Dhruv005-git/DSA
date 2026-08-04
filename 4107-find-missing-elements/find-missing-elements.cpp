class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());
        vector<int> ans;
        for(int i=mini; i<=maxi; i++){
            bool flag = false;
            for(int j=0;j<n;j++){
                if(i==nums[j]){
                    flag = true;
                    break;
                }
            }
            if(!flag) ans.push_back(i);
        }
        return ans;
    }
};