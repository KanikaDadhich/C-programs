class Solution 
{
    public:
    char findTheDifference(string s, string t) 
    {
        char ans=0;
        for(char alpha: s)
        {
            ans=ans^ alpha;
        }//end of for loop()
        for(char alpha:t)
        {
            ans=ans^alpha;
        }
        return ans;
    }//end of findtheDifference()
};