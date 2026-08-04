class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());
        vector<int> ans;
        for(int i=mini;i<=maxi;i++){
            if(!st.count(i)) ans.push_back(i);
        }
        return ans;
    }
};