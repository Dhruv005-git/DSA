class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxi = INT_MIN;
        int l = 0;
        int r = n-1;
        while(l<=r){
            int area = min(height[l], height[r]) * (r - l);
            maxi = max(maxi, area);
            if(height[l] < height[r]) l++;
            else r--;
        }
        return maxi;
    }
};