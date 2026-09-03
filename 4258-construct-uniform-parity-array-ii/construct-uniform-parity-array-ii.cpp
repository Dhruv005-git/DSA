class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        //DJ nu second code
        bool flagEve = true;
        bool flagOdd = true;

        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2) flagOdd = false;
            else flagEve = false;
        }

        if(flagEve || flagOdd) return true;

        int mini = *min_element(nums1.begin(),nums1.end());
        if(mini%2==1) return true;
        else return false;
    }
};