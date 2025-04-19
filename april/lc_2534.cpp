#include <functional>
#include<queue>
#include<vector>

using namespace std;

class Solution{
public:
    vector<int> timeTaken(vector<int>& arrival, vector<int>& state){
        queue<int> enter{}; // if the state -> 0
        queue<int> exit{};  // if the state -> 1    
        //
        int last_state = 1;
        int last_time_used = -2;
        
        int n = arrival.size();
        int current_time = 0;

        vector<int> res(n,-1);
        
        int processed_count = 0;

        while(processed_count<n || enter.empty() == false || exit.empty() == false){

            while(processed_count<n && arrival[processed_count]<=current_time){
                if(state[processed_count] == 0){
                    enter.push(processed_count);
                }else{
                    exit.push(processed_count);
                }
                processed_count++;
            }
            
            if(exit.empty()== false || enter.empty() == false){
                if(exit.empty() == false
                    && (enter.empty() || last_time_used!=time-1 || last_state == 1)){
                    int idx = exit.front();
                    exit.pop();
                    res[idx] = current_time;
                    last_time_used = current_time;
                    last_state = 1;
                }else if(enter.empty() == false){
                    int idx = enter.front()
                    enter.pop()
                    res[idx] = current_time;
                    last_time_used = current_time;
                    last_state = 0;
                }else{
                    last_time_used = -2;
                }

            }
        current_time++;
        }

        return res;
    }
}
