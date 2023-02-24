// Given a signed 32-bit integer x, return x with its digits reversed.
// If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// Level: Medium

class Solution {
public:
    int reverse(int x) {
        int revNum = 0;
        while(x != 0) {
            int lastDigit = x % 10;
            // checking if reverse number is out of range [-2^31 <= x <= 2^31 - 1]
            if(revNum > INT_MAX / 10 || revNum < INT_MIN / 10) {
                return 0;
            }
            revNum = (revNum * 10) + lastDigit;
            x = x / 10;
        }
        return revNum;
    }
};
