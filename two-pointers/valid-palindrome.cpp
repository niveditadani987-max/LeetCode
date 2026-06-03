
class Solution {
public:
    bool isPalindrome(string s) {
        string clean="";
        for(char ch:s){
            if(isalnum(ch)){
                clean+=tolower(ch);
            }
        }
        int l=0;
        int r=clean.size()-1;
        while(l<r){
            if(clean[l]!=clean[r])
            return false;
            l++;
            r--;
        }
        return true;
    }
};