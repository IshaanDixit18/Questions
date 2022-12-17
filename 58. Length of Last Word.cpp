class Solution {
public:
    int lengthOfLastWord(string s) {
        
        
        int space_count = -1;
        
        for(int i = 0; i<=s.length();i++){
            
            if(s[i]==' ' || i == s.length()){
                
                space_count++;
            }
        }
        int low = 0;
        int high = s.length()-1;
        while(s[high]==' '){
            high = high - 1;
            space_count--;
        }
        
        while(space_count!=0){
            if(s[low]==' '){
                space_count--;
                low++;
                
            }
            else{
                low++;
            }
        }
        int lastcount = 0;
        for(int i = low;i<=high;i++){
            lastcount++;
        }
        
        return lastcount;
        
    }
};