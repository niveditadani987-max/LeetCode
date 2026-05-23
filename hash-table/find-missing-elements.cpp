class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i+1]!=nums[i]+1){
                 for(int x = nums[i] + 1; x < nums[i+1]; x++){
                    ans.push_back(x);
            }
        }
    }
    return ans;
    }
};