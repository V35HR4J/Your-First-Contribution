class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){
            return 0;
        }
        map<char,int> x;
        int ans=0;
        int i=0,j=0,n=s.size();
        
        while(j<n){
            
            if(x[s[j]]==0){
                
                x[s[j]]++;
                j++;
                
                
            }
            else{
                ans=max(ans,j-i);
                x[s[i]]--;
                i++;
            }
            
        }
        ans=max(ans,j-i);
        return ans;
    }
};