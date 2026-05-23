class Solution {
public:
    void swap(vector<int>&nums,int i,int j){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        }
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1)
        return;
        int i=j+1;
        while(i<n){
            if(nums[i]!=0){
                swap(nums,i,j);
                j++;
            }
            i++;
        }
    }
};