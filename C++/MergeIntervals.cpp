#include<bits/stdc++.h>
using namespace std;

//Time Complexity- O(n log n)+O(n)

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals;
        if(intervals.size()==0)
            return mergedIntervals;
        sort(intervals.begin(),intervals.end());
        vector<int> tempInterval=intervals[0]; //Putting first interval in temp
        for(auto x:intervals)
        {
            if(x[0]<=tempInterval[1])
                tempInterval[1]=max(x[1],tempInterval[1]); //if left bound of interval is less than right bound of temp, it can be merged
            else
            {
                mergedIntervals.push_back(tempInterval); //stores interval which cannot be merged
                tempInterval=x; //puts next interval as temp
            }
        }
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals;
    }

int main()
{
    int n,num;
    vector<vector<int>> v;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        vector<int>temp;
        for(int j=0;j<2;j++)
        {
            cin>>num;
            temp.push_back(num);
        }
        v.push_back(temp);
    }
    
    v=merge(v);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}
