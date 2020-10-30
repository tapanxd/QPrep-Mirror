//https://leetcode.com/submissions/detail/379404230/



class Solution {
public:
	int maxProduct(vector<int>& nums) {
		int maxm  = nums[0];
        int minm  = nums[0];
        int res = nums[0];
        
        for(int i = 1 ; i < nums.size() ; ++i){
            if(nums[i] < 0){
                int tmp = maxm;
                maxm = minm;
                minm = tmp;
            }
            
            maxm = max(nums[i],nums[i]*maxm);
            minm = min(nums[i],nums[i]*minm);
            res = max(maxm,res);
        }
        return res;
	}
};