/*Example:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

*/
class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int low =0 , mid =0 , high = nums.size()-1;
        while(mid<=high)
        {
            switch(nums[mid])
            {
                     case 0: swap(nums[mid++] , nums[low++]);
                     break;

             case 1: mid++;
                     break;
            
             case 2: swap(nums[mid] , nums[high--]);
                     break;
            }
        }
    }
};
