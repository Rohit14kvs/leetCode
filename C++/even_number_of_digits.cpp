#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool evenDigit(int x) {
        int digit = 0;
        while(x>0) {
            x/=10;
            digit++;
        }
        if(digit%2==0)
            return true;
        return false;
    }

    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto i: nums) {
            if(evenDigit(i)) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<int> a{1, 22, 333, 4444, 13, 15, 666};
    cout<<s.findNumbers(a)<<endl;
    return 0;
}