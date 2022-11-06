class Solution {
public:
    bool isPalindrome(int x) {
        int right = 0;
        int d = 1;
        while(right < x){
            right = x % 10 + right*d;
            d *= 10;
            x /= 10;
        }
        
        return x == right || x == right / 10;
    }
};