class Solution {
public:
    int maximumLengthSubstring(string nums) {
         unordered_map<int,int> freq;
        int n = nums.size();
        int l=0,r=0;
        int maxi = INT_MIN;
        while(r<n){
            freq[nums[r]]++;
            while(freq[nums[r]]>2){
                freq[nums[l]]--;
                if(freq[nums[l]]==0) freq.erase(nums[l]);
                l++;
            }
            r++;
            maxi = max(maxi,r-l);
        }
        return maxi;
    }
};