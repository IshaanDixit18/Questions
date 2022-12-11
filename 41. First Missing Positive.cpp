class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        set<int> s;
        for(int i = 1; i<=nums.size(); i++){
            s.insert(i);

        }
        
        for(int i = 0; i<nums.size(); i++){
            if(s.find(nums[i])!=s.end()){
                s.erase(nums[i]);
            }
            
        }
        if(s.size() == 0){
            return (nums.size())+1;
        }
        else{
            return *s.begin();
        }
        
    }
};