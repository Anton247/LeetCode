#include <vector>
#include <unordered_map>
using namespace std; 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> M;
        for(int i=0; i<nums.size(); ++i){
            int diff = target - nums[i];
            if(M.count(diff) > 0)
                return {M[diff], i};
            else
                M[nums[i]] = i;
        }
        return {};
    }
};