#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
    unordered_map<char,char> ref;
    ref[']']='[';
    ref['}']='{';
    ref[')']='(';
    for(char c:s)
    {
        if(c=='[' or c=='{' or c=='(')
        {
            stack.push(c);
        }
        else if (stack.empty() or ref[c]!=stack.top())
        {
            return false;
        }
        else{
            stack.pop();
        }
    }
        return stack.empty();
    }
};

int main() {
    Solution s;
    cout<<s.isValid("()")<<endl;
    return 0;
}