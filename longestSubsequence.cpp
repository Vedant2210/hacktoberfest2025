class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        long long l=nums.size();
        long long ans=0;
        long long cnt=0;
        for(long long i=0;i<l;i++){
            if(nums[i]==0){
                cnt++;
            }
        }
        if(cnt==l)return 0;
        for(long long i=0;i<l-1;i++){
            ans=ans^nums[i];
            
        }
        if((ans^nums[l-1])!=0)return l;
        if(ans==0){
            return l-1;
        }
        cout<<ans;
        
        return l-1;
    }
};
