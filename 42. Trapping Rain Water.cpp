class Solution {
public:
    int trap(vector<int>& height) {

        
        int n = height.size();
        int result = 0;
        vector<int> leftmax(n);
        vector<int> rightmax(n);

        leftmax[0] = height[0];
        for(int i = 1; i<n; i++){
            leftmax[i] = max(leftmax[i-1], height[i]);

        }
        rightmax[n - 1] = height[n - 1];
        for(int i = n - 2; i>=0; i--){
            rightmax[i] = max(height[i], rightmax[i+1]);
        }

        for(int i = 1; i<n-1; i++){
            result = result +  (min(leftmax[i],rightmax[i]) - height[i]);
        }
        return result;
        
            
    }
};