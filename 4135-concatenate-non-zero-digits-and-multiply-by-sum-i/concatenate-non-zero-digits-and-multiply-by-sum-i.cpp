class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string s = to_string(n);
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        long long num = stoi(s);
        long long num1 = num;
        long long sum = 0;
        while(num1>0){
            sum += num1%10;
            num1/=10;
        }
        return sum*num;
    }
};