class Solution {
public:
    string addBinary(string a, string b) {
        assert(!a.empty() && !b.empty());
        string reversRes = ""s;
        for(
            int ia=a.length()-1, ib = b.length()-1, curry = 0;
            ia >=0 || ib >= 0 || curry > 0;
            --ia, --ib
        ){
            int sum = curry + (ia>=0?a[ia] - '0': 0) + (ib>=0?b[ib] - '0':0);
            reversRes += char(sum%2 + '0');
            curry = sum / 2;
        }
        return { reversRes.rbegin(), reversRes.rend() };
    }
};