#include <vector>
#include "utility.h"
using namespace std;
class Solution{

public:
    vector<int> sortedSquares(vector<int>& nums){
        vector<int> result(nums.size(), 0);
        int last = nums.size() - 1;
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right){
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if(leftSquare <= rightSquare){
                result[last--] = rightSquare;
                right--; 
            }else{
                result[last--] = leftSquare;
                left++;
            };
        };
        return result;
    };
};


int main(int argc, char** argv){

    vector<int> nums = {-4,-1,0,3,10};
    Solution solution;
    vector<int> r = solution.sortedSquares(nums);
    Utility::print_vector<int>(nums);
    Utility::print_vector<int>(r);
};

