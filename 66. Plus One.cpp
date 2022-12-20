class Solution {
public:
    vector<int> plusOne(vector<int>& digits){

    vector<int> ans;
    int high = digits.size() - 1;
    int sum = 0;
    int carry = 0;

    while (high >= 0)
    {

        int digit = digits[high];

        if (high == digits.size() - 1)
        {
            sum = digit + carry + 1;
            carry = sum / 10;
            ans.push_back(sum % 10);
            high--;
        }
        else
        {
            sum = digit + carry;
            carry = sum / 10;
            ans.push_back(sum % 10);
            high--;
        }
    }
    if (carry == 1)
    {
        ans.push_back(1);
    }
    reverse(ans.begin(), ans.end());
    return ans;

        
    }
};