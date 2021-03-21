class Solution {
public:
    int maximum69Number (int num) {
    vector<int> digits; 
    if (num == 9 || num == 6){
        return 9;
    }
    while(num){
        int element = num % 10;
        digits.push_back(element);
        num /= 10;
    }
    for (int i = digits.size() - 1; i >= 0; --i){
        if (digits[i] == 6){
            digits[i] = 9;
            break;
        }
    }
    int ans = 0;
    for (int i = digits.size() - 1; i >= 0; --i){
        ans = ans*10 + digits[i];
    }
        return ans;
    }
};