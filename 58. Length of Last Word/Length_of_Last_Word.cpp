class Solution {
public:
    int lengthOfLastWord(string s) {
        bool firstSpace = 0;
        int length = 0;
        for(int i=s.size()-1; i>=0; --i){
            if(s[i] == ' ' && firstSpace == 0)
                continue;
            else if(s[i] == ' ' && firstSpace == 1)
                break;
            else
                firstSpace = 1;
            ++length;
        }
        return length;
    }
};