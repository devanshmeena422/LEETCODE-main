class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long rev=0;
        int og=x;
        while(x>0){
            int k=x%10;
            rev=rev*10+k;
            x=x/10;
        }
        return rev==og;
    }
};