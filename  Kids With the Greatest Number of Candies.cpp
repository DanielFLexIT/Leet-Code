class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         int max = *max_element(candies.begin(), candies.end());
         vector<bool>vec;
         int size = candies.size();
         for (int i = 0; i < size; ++i){
            extraCandies + candies[i] >= max ? vec.push_back(1) : vec.push_back(0);
         }
        return vec;
    }
};