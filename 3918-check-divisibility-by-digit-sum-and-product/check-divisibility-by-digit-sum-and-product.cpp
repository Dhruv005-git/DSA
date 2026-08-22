class Solution {
public:
    int digitSum(int n){
        int sum=0;
        while(n>0){
            int d = n%10;
            sum+=d;
            n/=10;
        }
        return sum;
    }
    int productSum(int n){
        int product = 1;
        while(n>0){
            int d = n%10;
            product*=d;
            n/=10;
        }
        return product;
    }
    bool checkDivisibility(int n) {
        int sum = digitSum(n) + productSum(n);
        if(n%sum==0) return true;
        return false;
    }
};