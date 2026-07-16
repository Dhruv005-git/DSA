class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> maximum(n);
        int maxi = nums[0];
        maximum[0] = maxi;
        for(int i=1;i<n;i++){
            maxi = max(maxi,nums[i]);
            maximum[i] = maxi;
        }
        vector<int> pregcd(n);
        for(int i=0;i<n;i++){
            pregcd[i] = gcd(nums[i],maximum[i]);
        }
        sort(pregcd.begin(),pregcd.end());
        int l=0;
        int r = n-1;
        long long sum=0;
        while(l<r){
            sum+=gcd(pregcd[l],pregcd[r]);
            l++;
            r--;
        }
        return sum;
    }
};