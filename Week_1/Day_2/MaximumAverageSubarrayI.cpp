class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int n=nums.size();
       int i=0;
       int j=0;
       long long maxsum=LLONG_MIN;
       long long sum=0;
       while(j<n){
        sum=sum+nums[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(maxsum<sum){
                maxsum=sum;
            }
            sum=sum-nums[i];
            i++;
            j++;
        }
       }
       return (double)maxsum/k;

    }
};
