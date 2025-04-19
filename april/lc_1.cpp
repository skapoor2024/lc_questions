#include <cstddef>
#include<vector>
#include <algorithm>
#include<unordered_map>

using namespace std;

class Solution{

public:

    // vector<int> twoSum(vector<int>& nums, int target){
    //     sort(nums.begin(),nums.end());
    //     unordered_map<int,int> umap{};
    //     vector<int> res{};
    //     int sz = nums.size();
    //     for(int i{};i<sz;++i){
    //         umap[nums.at(i)] = i;
    //     }
    //     int i = 0, j = sz-1;
    //
    //     while(i<j){
    //         int num1 = nums.at(0);
    //         int num2 = nums.at(1);
    //
    //         int sum = num1 + num2;
    //         if(sum > target ){
    //             j--;
    //         }else if(sum<target){
    //             i++;
    //         }else{
    //             res.push_back(umap[num1]);
    //             res.push_back(umap[num2]);
    //         }
    //
    //     }
    //     return res;
    // }
    //

    vector<int> twoSum(vector<int>&nums, int target){
        unordered_map<int,int> umap{};
        vector<int> res{};
        for(int i{};i<nums.size();++i){
            umap[nums.at(i)] = i;
        }
        for(int i{};i<nums.size();++i){
            int num1 = nums.at(i);
            int num2 = target - num1;
            if(umap.find(num2) != umap.end() && i!=umap[num2]){
                res.push_back(i);
                res.push_back(umap[nums2]);
            }
        }
        return res;
    }
}
