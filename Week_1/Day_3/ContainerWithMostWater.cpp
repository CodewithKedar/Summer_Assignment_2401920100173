class Solution {
public:
    int maxArea(vector<int>& height) {
      int n=height.size();
      int i=0;
      int j=n-1;
      int w,ht,area;
      int maxwater=0;
      while(i<j){
        w=j-i;
        ht=min(height[i],height[j]);
        area=w*ht;
        maxwater=max(maxwater,area);
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }

      }
      return maxwater;
    }
};
