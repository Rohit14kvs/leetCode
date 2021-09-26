#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != val) {
                nums[count] = nums[i];
                count++;
            }
        }
        return count;  
    }
};

int main() {
    Solution s;
    vector<int> a{1,2,2,3,5};
    cout<<s.removeElement(a, 2)<<endl;
    return 0;
}