class Solution {
public:
    int minimumPushes(string word) {
        if(word.size()<=8) return word.size();
        unordered_set <char>st;
        for(int i=0;i<word.size();i++){
            st.insert(word[i]);
        }
        if(word.size()>8 && word.size()<=16){
            int extra = word.size() - 8;
            return 8 + 2*extra;
        }
        else if(word.size()>16 && word.size()<=24){
            int extra = word.size() - 16;
            return 24 + 3*extra;
        }
        else{
            int extra = word.size() - 24;
            return 48 + 4*extra;
        }
    }
};