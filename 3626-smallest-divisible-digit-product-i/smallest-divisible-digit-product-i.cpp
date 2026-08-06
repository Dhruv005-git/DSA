class Solution {
public:
    int digSum(int n){
        int product = 1;
        while(n>0){
            int d = n%10;
            product = d*product;
            n/=10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        while(true){
            if(digSum(n)%t == 0) return n;
            n++;
        }
        return 0;
    }
};