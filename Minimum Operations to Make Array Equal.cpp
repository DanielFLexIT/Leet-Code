class Solution {
public:
    int minOperations(int n) {
     if (n == 1){
         return 0;;
     }   
    int ans = 0;
    for (int i = 0; i < (n + 1) / 2; ++i){
        ans += (n - 2*i - 1);
    }
        return ans;
    }
};