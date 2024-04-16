#include <vector>
#include "utility.h"
using namespace std;

class Solution{

public:
    int removeElement(vector<int>& nums, int val){
        int slowIndex = 0;

        for(int i = 0; i < nums.size(); i++){
            if(val != nums[i]){
               nums[slowIndex++] = nums[i]; 
            }
        };

        return slowIndex;
    };
};


int main(int argc, char** argv){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    Solution solution;
    int size = solution.removeElement(nums, 2); 
    Utility utility;
    cout << "new size is: " << size << endl;
    nums.resize(5);
    utility.print_vector(nums);
    return 0;
};

