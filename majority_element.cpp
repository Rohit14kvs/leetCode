#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> A)
{
    int cand = A[0];
    int count = 1;
    for (int i = 1; i < A.size(); i++)
    {
        if (A[i] == cand)
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                cand = A[i];
                count = 1;
            }
        }
    }
    return cand;
}

int main()
{
    vector<int> v = {1, 2, 2, 2, 3};

    cout << majorityElement(v) << endl;
    return 0;
}