class Solution {
public:
    bool splitArraySameAverage(vector<int>& v) {
    int sum = accumulate(v.begin(),v.end(),0);
    int n = v.size();
    int p = n/2 + 1;
    vector<unordered_set<int>>m(p);
    m[0].insert(0);
    for(auto i:v)
    {
        for(int j=p-1;j>0;j--)
        {
            for(auto it:m[j-1])
            {
                m[j].insert(it+i);
            }
        }
    }
        for(int i=1;i<p;i++)
        {
            if((i*sum)%n==0 and m[i].count((i*sum)/n))return true;
        }
        return false;
        
    }
};
