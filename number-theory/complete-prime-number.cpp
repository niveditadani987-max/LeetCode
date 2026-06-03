class Solution {
public:
    bool completePrime(int num) {
        while(num>0){
            int ld=num%10;
            if(!isPrime(ld))
            return false;
            num=num/10;
        }
        return true;
    }
    bool isPrime(int n) {
        int count=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                count++;
                if((n/i)!=i)
                count++;
            }
        }
        if(count==2)
        return true;
        else
        return false;
    }
};