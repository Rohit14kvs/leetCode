#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=INT_MIN;
        for(int i=0; i<accounts.size(); i++) {
                int sum=0;
            for(int j=0; j<accounts[i].size(); j++) {
                sum +=accounts[i][j];
            }
            if(sum>max)
                max=sum;
        }
        return max;
    }
};

int main() {
    Solution s;
    vector<vector<int>> a{{2,8,7},{7,1,3},{1,9,5}};
    cout<<s.maximumWealth(a)<<endl;
    return 0;
}