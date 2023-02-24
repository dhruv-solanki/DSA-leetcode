// Given an integer x, return true if x is a palindrome and false otherwise.

// Level: Easy
// Time Complexity:  O(log 10 (n))
// Space Complexity: O(1)

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }

        if(x == reverseNumber(x)) {
            return true;
        }
        return false;
    }

    int reverseNumber(int n) {
        int revNum = 0;
        while (n != 0) {
            int lastDigit = n % 10;
            if(revNum > INT_MAX / 10 || revNum < INT_MIN / 10) {
                return 0;
            }
            revNum = (revNum * 10) + lastDigit;
            n = n / 10;
        }
        return revNum;
    }
};
