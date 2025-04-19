#include<vector>

using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        // find the change of colour from lhs
        // find the change of colour from rhs
        // for each stor the color_idx and the idx
        int res{};
        int sz = colors.size();
        int initial_color = colors[0];
        int idx = 0;
        while(idx<sz && colors[idx] == initial_color){
            idx++;
        }
        //now store the color at the previous idx and the prev idx
        int idxl1 = 0;
        int lc1 = colors[idxl1];
        int idxl2 = idx;
        int lc2 = colors[idxl2];

        idx = sz-1;
        initial_color = colors[idx];
        while(idx>=0 && colors[idx] == initial_color){
            idx--;
        }
        int idxr1 = sz-1;
        int rc1 = colors[idxr1];
        int idxr2 = idx;
        int rc2 = colors[idxr2];

        //now find the difference
        if(lc1 != rc1){
            res = max(res,idxr1-idxl1);
        }
        if(lc1 !=rc2){
            res = max(res,idxr2-idxl1);
        }
        if(lc2!=rc1){
            res = max(res,idxr1-idxl2);
        }
        if(lc2!=rc2){
            res = max(res,idxr2-idxl2);
        }
        return res;
    }
};
