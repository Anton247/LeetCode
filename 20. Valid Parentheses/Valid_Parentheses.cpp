#include <unordered_map>
#include <stack>

class Solution {
    unordered_map<char, char> brackets = {{')', '('}, {']', '['}, {'}', '{'}};
public:
    bool isValid(string s) {
        stack<char> sCh;
        for(const char c : s){
            if(brackets.count(c) == 0)
                sCh.push(c);
            else if(!sCh.empty()){
                if(sCh.top() == brackets[c])
                    sCh.pop();
                else
                    return false;
            }
            else
                return false;
        }
        return sCh.empty();
    }
};