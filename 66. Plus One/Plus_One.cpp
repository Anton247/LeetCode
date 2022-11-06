class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int insert = digits.size() - 1;
        int N = 1;
        while(insert != -1 && N != 0){
            if(N != 0 && digits[insert] + N < 10){
                digits[insert] = (digits[insert] + N);
                break;
            }
            else if(N != 0 && digits[insert] + N >= 10){
                N = (digits[insert] + 1) / 10;
                digits[insert] = (digits[insert] + N) % 10;
                --insert;
            }
        }
        if(insert == -1 && N != 0){
            digits.push_back(0);
            ++insert;
            digits[insert++] = 1;
            for(; insert < digits.size() - 2; ++insert)
                digits[insert] = 0;
        }
        return digits;
    }
};