#include <math.h>     
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int counter = 0;
        for (int element:nums){
           if ((int)ceil(log10(element + 1)) % 2 == 0){
               ++counter;
           }
        }
        return counter;
    }
};