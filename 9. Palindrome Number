class Solution {
public:
    bool isPalindrome(int x) {
        
        long revnum = 0;
        int num = x;
        while(x>0 ){
            int rem = x % 10;
            revnum = revnum * 10 + rem;
            x = x / 10;
        }
        if(x < 0 || (x % 10 == 0 && x != 0) ){
            return false;
        }
        else if(revnum == num){
            return true;
        }
        else{
            return false;
        }
    
        
    }
};