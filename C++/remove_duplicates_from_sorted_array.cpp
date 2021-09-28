#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
    for(int j=1;j<nums.size();j++)
    {
        if(nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    if(nums.size() ==0)
    {
        return 0;
    }
    return i+1;
    }
};

int main() {
    Solution s;
    vector<int> a{1,1,1,2,2,2,3,4,5,6,6};
    cout<<s.removeDuplicates(a)<<endl;
    for(auto i: a) {
        cout<<i<<' ';
    }
    cout<<endl;
    return 0;
}