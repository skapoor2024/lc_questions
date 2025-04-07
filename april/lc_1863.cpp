#include <vector>
using namespace std;

class Solution {
    int sum{};
    int xorsum{};
    void func(int idx, vector<int>& nums){

        if(idx == nums.size()){
            xorsum = xorsum + sum;
            return;
        }

        //choose
        sum = sum ^ nums[idx];
        func(idx+1,nums);
        
        //unchoose
        sum = sum ^ nums[idx];
        func(idx+1,nums);
        
    }
public:
    int subsetXORSum(vector<int>& nums) {
        func(0,nums);
        return xorsum;
    }
};
