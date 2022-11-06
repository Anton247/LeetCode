#include <unordered_map>
class Solution {
    unordered_map<char, int> tr = {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},
                                   {'D',   500}, {'M', 1000}};
public:
    int romanToInt(string s) {
        int res = 0;
        for(int i=0; i < s.length(); ){
            char cur = s[i];
            char next = ' ';
            if(i != s.length() - 1)
                next = s[i+1];
            
            if((next == 'V' || next == 'X') && cur == 'I')
            {res += tr[next] - 1; i+=2;}
            else if((next == 'L' || next == 'C') && cur == 'X')
            {res += tr[next] - 10;i+=2;}
            else if((next == 'D' || next == 'M') && cur == 'C')
            {res += tr[next] - 100;i+=2;}
            else
            {res += tr[cur]; ++i;}
        }
        return res;
    }
};