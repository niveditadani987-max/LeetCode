class Solution {
public:
    int primePalindrome(int n) {
        int current=n;
        while(true){
            if(isPrime(current) && isPalindrome(current))
            return current;
            current++;
        }
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

    bool isPalindrome(int n){
        int curr=n;
        int rev=0;
        while(n>0){
            int ld=n%10;
            rev=(rev*10)+ld;
            n=n/10;
        }
        if(rev==curr)
        return true;
        else
        return false;
    }
};