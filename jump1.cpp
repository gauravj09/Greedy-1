//time complexity: O(n)   -> we Iterate the entire nums 
//space complexity: O(n)  -> nums array occupies O(n) space 

//logic: Starting from the last element, check if the sum of index & the elemnet is greater than lastIndex. Update lastIndex to the current index in that case


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
    public:

        bool canJump(vector<int>& nums) {
            
            int lastIndex = nums.size() - 1;

            for(int i = lastIndex - 1; i >= 0; i--)
            {   
                if(nums[i] + i >= lastIndex) lastIndex = i;
            }
            
            return lastIndex==0;

    }
};
      