class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;
        while(n>0){
            int d = n%10;
            ans.push_back(d);
            n/=10;
        }
        sort(ans.rbegin(),ans.rend());
        return ans[0]*ans[1];
    }
};