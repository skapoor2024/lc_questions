#include<vector>
#include<algorithm>

class Solution{
public:
    void wiggleSort(vector<int>& nums){
        sort(nums.begin(),nums.end());

        int sz = nums.size();
        for(int i{1};i<sz;i+=2){
            int temp = nums.at(i+1);
            nums.at(i+1) = nums.at(i);
            nums.at(i) = temp;
        }
    }
};
