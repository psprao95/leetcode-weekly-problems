class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int p=target.size();
        vector<string> res;
        int i=0,j=1;
        while(i<p&&j<=n)
        {


                res.push_back("Push");

            if(target[i]!=j)
            {
                res.push_back("Pop");
            }
            else
            {
                i++;
            }
            j++;
        }
        return res;
    }
};
