class Solution {
public:
    int subtractProductAndSum(int n) {
        int mult = 1;
        int sum = 0;
        while (n){
            int element = n % 10;
            n /= 10;
            sum += element;
            mult *= element;
        }
        return mult - sum;
    }
};