#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0, end = letters.size()-1, mid;
        while(start <= end) {
            mid = start + (end - start)/2;

            if(target < letters[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        return letters[start%letters.size()];
    }
};

int main() {
    Solution s;
    vector<char> c = {'c', 'f', 'j'};
    cout<<s.nextGreatestLetter(c, 'j')<<endl;
    return 0;
}