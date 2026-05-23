class Solution {
public:
    void swapchar(char &s1,char &s2){
        char temp;
        temp=s1;
        s1=s2;
        s2=temp;
    }
    void reverseHelper(vector<char> &str,int l,int r) {
        if(l>=r)
        return;
        swapchar(str[l],str[r]);
        reverseHelper(str,l+1,r-1);
    }
    void reverseString(vector<char> &str){
        reverseHelper(str,0,str.size()-1);
    }
};