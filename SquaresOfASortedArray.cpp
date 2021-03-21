class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>answer;
        for (auto element: nums){
            answer.push_back(element*element);
        }
        sort(answer.begin(), answer.end());
        return answer;
    }
};