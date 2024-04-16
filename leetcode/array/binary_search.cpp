#include <vector>
#include <iostream>

using namespace std;

class Solution{

public:
    int search(vector<int>& nums, int target){

        int left = 0;
        int right = nums.size() - 1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] > target){
                right  = mid - 1;
            }else{
                left = mid + 1;
            };
        };

        return -1;
    };

};


int main(int argc, char** argv){
    Solution solution;
    vector<int> nums = {-1,0,3,5,9,12 };
    int r =  solution.search(nums, 9);
    cout << "result is " << r << endl;
};


