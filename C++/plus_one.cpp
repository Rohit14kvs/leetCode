#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size() - 1;
        digits[n] += 1;
        for (int i = n; i > 0; i--)
        {
            if (digits[i] / 10 == 1)
            {
                int borrow = 0;
                borrow = digits[i] % 10;
                digits[i - 1] += borrow;
            }
        }
        return digits;
    }
};

int main()
{
    vector<int> a{1, 2, 3, 9};
    Solution s;
    vector<int> b = s.plusOne(a);

    for (auto i : b)
    {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}
