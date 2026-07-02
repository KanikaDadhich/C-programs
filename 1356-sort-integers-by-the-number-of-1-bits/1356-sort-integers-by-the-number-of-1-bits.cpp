class Solution 
{
    public:
    vector<int> sortByBits(vector<int>& arr) 
    {
        auto countBits = [](int a)
                                {
                                    int count=0;
                                    while(a>0)
                                    {
                                        count=count+(a&1);
                                        a=a>>1;
                                    }//end of while loop
                                    return count;
                                };//end of line
        sort(arr.begin(),
             arr.end(),
             [&](int a, int b)
                            {
                                int countA=countBits(a);
                                int countB=countBits(b);
                                return (countA<countB)||
                                        (countA==countB && a<b); 
                            }                          //capture expression [ ] - &,=,blank
             );//end of line
             return arr;
    }//end of sortByBits()
};