#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	vector<int> ans;
    	map<int,size_t> m;
    	int num;
    	int len=nums.size();
        for(int i=0;i<len;i++)
        {
        	num=nums[i];
        	if(m.count(target-num))
        	{
        		ans.push_back(i);
        		ans.push_back(m[target-num]);
			}
			else
			{
				m.insert({num,i});
			}
		}
		return ans;
    }
};
