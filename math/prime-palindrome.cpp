class Solution {
public:
    int primePalindrome(int n) {
        int current=n;
        while(true){
            if(isPalindrome(current) && isPrime(current))
            return current;
            current++;
        }
    }
    bool isPrime(int n)
{
    if(n < 2)
        return false;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
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