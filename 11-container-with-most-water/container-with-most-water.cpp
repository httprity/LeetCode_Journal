class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int temp=0;
        int i=0;
        int j= height.size()-1;
        while(i<j){
                int h=min(height[i],height[j]);
                temp=h*(j-i);
                if(temp>maxWater){
                    maxWater=temp;
                }
                if(height[i]<height[j]){
                    i++;
                }else{
                    j--;
                }
            }
            return maxWater;
        }
        
    };