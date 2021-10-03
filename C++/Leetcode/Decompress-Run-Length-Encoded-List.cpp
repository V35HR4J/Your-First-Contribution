class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int>ans;
        for(int i =0;i<nums.size();i+=2)
        {
            for(int j=nums.at(i);j>=1;j--)
            {
                ans.push_back(nums.at(i+1));
            }
        }
        return ans;
        
    }
};
