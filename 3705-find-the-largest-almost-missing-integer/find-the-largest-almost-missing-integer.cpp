class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if(k==n) return *max_element(nums.begin(), nums.end());
        if(k==1){
            unordered_map<int, int> frq;
            for(int i=0;i<n;i++){
                frq[nums[i]]++;
            }
            int maxi=-1;
            for(int i=0;i<n;i++){
                if(frq[nums[i]]==1) maxi = max(maxi, nums[i]);
            }
            return maxi;
        }
        int nums1 = nums[0];
        int nums2 = nums[n-1];
        int cnt1 =0, cnt2 = 0;
        for(int i=0;i<n;i++){
            if(nums1 == nums[i]) cnt1++;
            if(nums2 == nums[i]) cnt2++;
        }
        if(cnt1>1 && cnt2>1) return -1;
        if(cnt1==1 && cnt2==1) return max(nums1, nums2);
        if(cnt1==1) return nums1;
        if(cnt2==1) return nums2;
        return 0;
    }
};