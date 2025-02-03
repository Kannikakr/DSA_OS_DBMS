/* Reverse Integer 
 Given a signed 32-bit integer x, 
 return x with its digits reversed. 
 If reversing x causes the value to go outside 
 the signed 32-bit integer range [-231, 231 - 1], 
 then return 0.

Assume the environment does not allow you to 
store 64-bit integers (signed or unsigned).
 */

class Solution {
public:
    int reverse(int x) {
        int reversedNum = 0;

        while (x != 0) {
            int digit = x % 10;

            if (reversedNum > INT_MAX / 10 || (reversedNum == INT_MAX / 10 && digit > 7)) {
                return 0;
            }
            if (reversedNum < INT_MIN / 10 || (reversedNum == INT_MIN / 10 && digit < -8)) {
                return 0; 
            }

            reversedNum = reversedNum * 10 + digit;
            x /= 10;
        }

        return reversedNum;
    }
};
