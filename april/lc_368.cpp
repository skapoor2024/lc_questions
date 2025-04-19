#include <vector> 

using namespace std;

class Solution{

public:
    vector<int> largestDivisibleSubset(vector<int>& nums){
        // how to solve it with dp and array
        int sz = nums.size();
        vector<vector<bool>> dp_arr(sz,vector<bool>(sz,false));
        // first try brute force
        vector<int> res{}; 
        for(int i{};i<sz;++i){
           for(int j{i};j<sz;++j){
                if(i == j) continue;

                if(nums[i]%nums[j] == 0 || nums[j]%nums[i] == 0){

                    dp_arr[i][j] = true;
                        
                    dp_arr[j][i] = true;
                }
                
            } 


        }

    return res;
    }

}; 
