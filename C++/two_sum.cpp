#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        for(int i=0; i<nums.size(); i++) {
            int val = target - nums[i];
            for(int j=i+1; j<nums.size(); j++) {
                if(val == nums[j]) {
                    indices.push_back(i);
                    indices.push_back(j);
                }
            }
        }
        return indices;
    }
     
};

int main() {
    Solution s;
    vector<int> a {2,7,11,15};
    vector<int> b = s.twoSum(a, 9);
    for (int x: b) {
        cout<<x<<' ';
    }
    cout<<endl;
    return 0;
}