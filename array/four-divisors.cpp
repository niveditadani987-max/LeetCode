class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int totalSum=0;
        for(int n:nums){
            int count=0;
            int sum=0;
            for(int i=1;i<sqrt(n);i++){
                if(n % i == 0) {
                    count++;
                    sum += i;

                    if((n / i) != i) {
                        count++;
                        sum += (n / i);
                    }
                }
            }
            if(count==4){
            totalSum+=sum;
            }
        }
        return totalSum;
    }
};