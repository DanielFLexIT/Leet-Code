class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        vector<int>counters;
        for (int element: nums){
            if (element){
                counter += 1;
            }
            else{
                counters.push_back(counter);
                counter = 0;
                continue;   
            }
            }
        if(counter){
            counters.push_back(counter);
        }
        if (counters.size()){
            return *max_element(counters.begin(), counters.end());
        }
        return 1;
    }
};