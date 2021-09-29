#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int search(vector<int>& nums, int target, bool findStartIndex) {
        int ans = -1;
        int start = 0;
        int end = nums.size() - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;

            if (target < nums[mid]) {
                end = mid - 1;
            } else if (target > nums[mid]) {
                start = mid + 1;
            } else {
                ans = mid;
                if (findStartIndex) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans = {-1, -1};
        ans[0] = search(nums, target, true);
        if (ans[0] != -1) {
            ans[1] = search(nums, target, false);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> a{5,7,7,8,8,10};
    vector<int> b = s.searchRange(a, 8);
    for(auto i:b) {
        cout<<i<<' ';
    }
    cout<<endl;
    return 0;
}