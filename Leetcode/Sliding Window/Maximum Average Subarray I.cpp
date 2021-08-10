class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
         double sum = 0 , maxx = INT_MIN;
        int n = nums.size();
         for(int i=0;i<n;i++)
         {
             if(i<k)
             {
                 sum+=nums[i];
             }
             else
             {
                 maxx = max(sum,maxx);
                  sum+=nums[i] - nums[i-k];   
             }
           
         }
         maxx = max(sum,maxx);
        return maxx/k;
    }
};
