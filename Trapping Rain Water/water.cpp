class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> maxL(n);
        vector<int> maxR(n);
        
        maxL[0]=height[0];
        for(int i=1;i<n;i++)
        {
            maxL[i]=max(maxL[i-1],height[i]);

        }
        maxR[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            maxR[i]=max(height[i],maxR[i+1]);

        }
    
            int sum=0;

        for(int i=1;i<n-1;i++)
        {
            int mini=min(maxR[i],maxL[i]);
            sum+=max(0,mini-height[i]);

        }
    
    return sum;
    
    }
};
