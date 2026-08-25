class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n =nums.size();
        for(int j=k;;j+=k){
            bool flag = false;
            for(int i=0;i<n;i++){
                if(j==nums[i]){
                    flag=true;
                    break;
                }
            }
            if(!flag) return j;
        }
        return -1;
    }
};