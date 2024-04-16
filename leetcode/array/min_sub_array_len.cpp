#include <vector>
#include "utility.h"

using namespace std;

class Solution{

public:

    int min_sub_array_len(int s, vector<int>& nums){
         int left = 0;

         int sum = 0;
         int len = 0;
         int startIndex = 0; 

         

         for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            while(sum >= s){
                int l = i - left + 1;
                if(len == 0 || len > l){
                   len = l; 
                   startIndex = left;
                };

                left++;
                sum = sum - nums[left - 1]; 
            };
         };

        return len;
    };
};

int main(int argc, char** argv){

    vector<int> nums = {2,3,1,2,4,3};

    Solution solution;

    int r = solution.min_sub_array_len(7,nums);

    cout << "result is " << r << endl;


};

