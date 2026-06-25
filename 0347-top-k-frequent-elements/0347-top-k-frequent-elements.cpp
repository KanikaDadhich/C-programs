class Solution 
{
    public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> freqTable;
        for(int n:nums)
        {
            freqTable[n]=freqTable[n]+1;
        }//end of for loop
        priority_queue<pair<int,int>,
        vector<pair<int,int>>,greater<pair<int,int>> > minHeap;
        for(auto& [n,freq] : freqTable)
        {
            minHeap.push({freq,n});
            if(minHeap.size()>k)
            {
                minHeap.pop();
            }//end of if block()
        }// end of for loop
        vector<int> ans;
        while(!minHeap.empty())
        {   
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }//end of while loop
        return ans;
    }//end of topKFrequent()
};