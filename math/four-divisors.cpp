class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int sum=0;
        vector<int> ans;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
            ans.push_back(i);
            count++;
            if((n/i)!=i)
            ans.push_back(n/i);
            count++;
            }
        }
    if(count==4){
        int a=ans.size()-1;
        for(int i=0;i<a;i++){
            sum=sum+ans[i];
        }
        return sum;
    }
    return 0;
    }
};