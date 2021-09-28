#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,u=nums.size()-1,m;
        while(l<=u)
        {
            m=(l+u)/2;
            if(target==nums[m])
                return m;
            else if(target<nums[m])
                u=m-1;
            else
                l=m+1;
        }
        if(target<nums[m])
            return m;
        return m+1;
    }
};

int main() {
    Solution s;
    vector<int> a{1, 2, 3, 4, 6};
    cout<<s.searchInsert(a, 5)<<endl;
    return 0;
}